// Nekki.SF2.GUI.Pvp.PlayerSelector$$LKKCCNDIDDM @ RVA 0x332FC94

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Pvp_PlayerSelector__LKKCCNDIDDM
          (Nekki_SF2_GUI_Pvp_PlayerSelector_o *__this,UnityEngine_Transform_o *DJGDJPGAFPG,
          int32_t DPJIDNBJIBG,UnityEngine_UI_Graphic_o *HOFIICIPGOM,float ILEBEOCFAHA,
          float EEMALGJACCO,float DDBONJDKEJM,System_Func_float__float__o *JJEAGPPNDJN,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((DAT_045678ff & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PlayerSelector_PKBACLLKEEB_TypeInfo);
    DAT_045678ff = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Pvp_PlayerSelector_PKBACLLKEEB_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)DJGDJPGAFPG;
  thunk_FUN_01c20e04(__this_00 + 2,DJGDJPGAFPG);
  *(int32_t *)&__this_00[2].monitor = DPJIDNBJIBG;
  __this_00[3].monitor = HOFIICIPGOM;
  thunk_FUN_01c20e04(&__this_00[3].monitor,HOFIICIPGOM);
  *(float *)((long)&__this_00[2].monitor + 4) = ILEBEOCFAHA;
  *(float *)&__this_00[3].klass = EEMALGJACCO;
  *(float *)&__this_00[4].monitor = DDBONJDKEJM;
  __this_00[4].klass = (Il2CppClass *)JJEAGPPNDJN;
  thunk_FUN_01c20e04(__this_00 + 4,JJEAGPPNDJN);
  return (System_Collections_IEnumerator_o *)__this_00;
}

