// Nekki.SF2.GUI.Pvp.PlayerSelector$$DAPNAKOICBI @ RVA 0x332FB78

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Pvp_PlayerSelector__DAPNAKOICBI
          (Nekki_SF2_GUI_Pvp_PlayerSelector_o *__this,UnityEngine_Transform_o *DJGDJPGAFPG,
          int32_t DPJIDNBJIBG,float JONBHCOPDOE,float LFJGFLNMBMC,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((DAT_045678fd & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PlayerSelector_IHBEAIOFKMN_TypeInfo);
    DAT_045678fd = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Pvp_PlayerSelector_IHBEAIOFKMN_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[3].monitor = __this;
  thunk_FUN_01c20e04(&__this_00[3].monitor,__this);
  __this_00[2].klass = (Il2CppClass *)DJGDJPGAFPG;
  thunk_FUN_01c20e04(__this_00 + 2,DJGDJPGAFPG);
  *(int32_t *)&__this_00[2].monitor = DPJIDNBJIBG;
  *(float *)((long)&__this_00[2].monitor + 4) = LFJGFLNMBMC;
  *(float *)&__this_00[3].klass = JONBHCOPDOE;
  return (System_Collections_IEnumerator_o *)__this_00;
}

