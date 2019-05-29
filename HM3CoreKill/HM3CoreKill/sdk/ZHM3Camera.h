#pragma once

#include <cstdint>
#include <sdk/MathCommon.h>

namespace ioi {
namespace hm3 {

	class ZHM3Camera
	{
	public:
		virtual void Function0(); //
		virtual void Function1(); //
		virtual void Function2(); //
		virtual void Function3(); //
		virtual void Function4(); //
		virtual void Function5(); //
		virtual void Function6(); //
		virtual void Function7(); //
		virtual void Function8(); //
		virtual void Function9(); //
		virtual void Function10(); //
		virtual void Function11(); //
		virtual void Function12(); //
		virtual void Function13(); //
		virtual void Function14(); //
		virtual void Function15(); //
		virtual void Function16(); //
		virtual void Function17(); //
		virtual void Function18(); //
		virtual void Function19(); //
		virtual void Function20(); //
		virtual void Function21(); //
		virtual void Function22(); //
		virtual void Function23(); //

		char pad_0x0004[0x30]; //0x0004
		Vector2 m_CameraSpaceSize; //0x0034 
		float m_ZCamOffset; //0x003C 
		char pad_0x0040[0x5C]; //0x0040

	}; //Size=0x009C


}}