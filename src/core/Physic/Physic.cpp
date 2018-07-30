//  Copyright (c) 2018 Hugo Amiard hugo.amiard@laposte.net
//  This software is licensed  under the terms of the GNU General Public License v3.0.
//  See the attached LICENSE.txt file or https://www.gnu.org/licenses/gpl-3.0.en.html.
//  This notice and the license may not be removed or altered from any source distribution.


#include <core/Entity/Entity.h>
#include <core/Entity/Entity.h>
#include <core/Physic/Physic.h>
#include <core/Physic/CollisionShape.h>

using namespace mud; namespace toy
{
	AreaMedium AreaMedium::me;

	AreaMedium::AreaMedium()
		: Medium("AreaMedium", false)
	{
		m_masks[CM_OBJECT] = CM_BUFFER | CM_AREA;
		m_masks[CM_BUFFER] = CM_OBJECT;
		m_masks[CM_AREA] = CM_OBJECT;
	}

	Physic::Physic(Entity& entity)
		//: m_areaStore()
	{
		UNUSED(entity);
		//entity.as<Emitter>().addEmitter(AreaMedium::me, make_object<SphereShape>(0.1f), CM_OBJECT);
	}

    /*void Physic::handle_add(Collider& object)
    {
		m_areaStore.add(object->m_entity.as<Area>());
	}

    void Physic::handle_remove(Collider& object)
    {
		m_areaStore.add(object->m_entity.as<Area>());
    }*/
}
