// Nekki.SF2.GUI.Fight.RaidWaitResultContent$$MGCPBOGFNNJ @ RVA 0x35BB934

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Fight_RaidWaitResultContent__MGCPBOGFNNJ
          (Nekki_SF2_GUI_Fight_RaidWaitResultContent_o *__this,float PNEIGGOFIOA,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568edc & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Fight_RaidWaitResultContent_HEBAOHOKNNA_TypeInfo);
    DAT_04568edc = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_RaidWaitResultContent_HEBAOHOKNNA_TypeInfo,
                                 method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].monitor = __this;
  thunk_FUN_01c20e04(&__this_00[2].monitor,__this);
  *(float *)&__this_00[2].klass = PNEIGGOFIOA;
  return (System_Collections_IEnumerator_o *)__this_00;
}

