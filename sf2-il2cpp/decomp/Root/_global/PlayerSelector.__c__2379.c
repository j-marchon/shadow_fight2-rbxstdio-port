// TypeDefIndex 2379
// Namespace: 
// [Serializable]
// private sealed class PlayerSelector.<>c
// Fields:
//   public static readonly PlayerSelector.<>c <>9; // 0x0
//   public static Func<float, float> <>9__21_0; // 0x8
//   public static Func<float, float> <>9__21_1; // 0x10

// ===== internal float ECPOHGEPIKJ(float x)  [RVA 0x33305A0]
// Nekki.SF2.GUI.Pvp.PlayerSelector.<>c$$ECPOHGEPIKJ @ RVA 0x33305A0

float Nekki_SF2_GUI_Pvp_PlayerSelector_<>c__ECPOHGEPIKJ
                (Nekki_SF2_GUI_Pvp_PlayerSelector___c_o *__this,float x,MethodInfo *method)

{
  return 1.0 - x;
}


// ===== internal float GJHAEGOKFOK(float x)  [RVA 0x33305AC]
// Nekki.SF2.GUI.Pvp.PlayerSelector.<>c$$GJHAEGOKFOK @ RVA 0x33305AC

float Nekki_SF2_GUI_Pvp_PlayerSelector_<>c__GJHAEGOKFOK
                (Nekki_SF2_GUI_Pvp_PlayerSelector___c_o *__this,float x,MethodInfo *method)

{
  return x;
}


// ===== public void .ctor()  [RVA 0x33305B0]
// Nekki.SF2.GUI.Pvp.PlayerSelector.<>c$$.ctor @ RVA 0x33305B0

void Nekki_SF2_GUI_Pvp_PlayerSelector_<>c___ctor
               (Nekki_SF2_GUI_Pvp_PlayerSelector___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x33305B8]
// Nekki.SF2.GUI.Pvp.PlayerSelector.<>c$$.cctor @ RVA 0x33305B8

void Nekki_SF2_GUI_Pvp_PlayerSelector_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04567903 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PlayerSelector_<>c_TypeInfo);
    DAT_04567903 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(Nekki_SF2_GUI_Pvp_PlayerSelector_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Pvp_PlayerSelector_<>c_TypeInfo->static_fields->__9 =
       (Nekki_SF2_GUI_Pvp_PlayerSelector___c_o *)__this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Pvp_PlayerSelector_<>c_TypeInfo->static_fields,__this);
  return;
}

