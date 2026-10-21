// TypeDefIndex 2869
// Namespace: 
// [Serializable]
// private sealed class AGGMBMDDJIO.<>c
// Fields:
//   public static readonly AGGMBMDDJIO.<>c <>9; // 0x0
//   public static Action<IAchievement[]> <>9__6_0; // 0x8

// ===== public void .ctor()  [RVA 0x343BB08]
// AGGMBMDDJIO.<>c$$.ctor @ RVA 0x343BB08

void AGGMBMDDJIO_<>c___ctor(AGGMBMDDJIO___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void IECJFIFMBJM(IAchievement[] achievements)  [RVA 0x343BB10]
// AGGMBMDDJIO.<>c$$IECJFIFMBJM @ RVA 0x343BB10

void AGGMBMDDJIO_<>c__IECJFIFMBJM
               (AGGMBMDDJIO___c_o *__this,
               UnityEngine_SocialPlatforms_IAchievement_array *achievements,MethodInfo *method)

{
  UnityEngine_SocialPlatforms_IAchievement_array *extraout_x1;
  
  if ((DAT_045681d8 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045681d8 = 1;
    achievements = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,achievements);
  }
  MGNPHCAAEIO__DIOGNFGEFDN((MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x343BB60]
// AGGMBMDDJIO.<>c$$.cctor @ RVA 0x343BB60

void AGGMBMDDJIO_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_045681d9 & 1) == 0) {
    FUN_01bab630(&AGGMBMDDJIO_<>c_TypeInfo);
    DAT_045681d9 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(AGGMBMDDJIO_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  AGGMBMDDJIO_<>c_TypeInfo->static_fields->__9 = (AGGMBMDDJIO___c_o *)__this;
  thunk_FUN_01c20e04(AGGMBMDDJIO_<>c_TypeInfo->static_fields,__this);
  return;
}

