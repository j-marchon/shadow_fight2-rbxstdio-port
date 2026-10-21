// Nekki.SF2.GUI.Fight.EndRaidFightScreenBase$$AJNEBENFIAJ @ RVA 0x34DBDF4

void Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__AJNEBENFIAJ
               (Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *__this,MethodInfo *method)

{
  Google_Protobuf_IMessage_o *pGVar1;
  KKLJIDJBFEI_o *__this_00;
  System_String_o *CELOLGNMKCG;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  int32_t iVar2;
  Google_Protobuf_IMessage_o **ppGVar3;
  
  if ((DAT_04568719 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_NLMPHGFNKBA__);
    DAT_04568719 = 1;
  }
  ppGVar3 = &(__this->fields).MGDEMNBPGIO;
  if (*ppGVar3 == (Google_Protobuf_IMessage_o *)0x0) {
    pGVar1 = (Google_Protobuf_IMessage_o *)
             (*(__this->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
                       (__this,(__this->klass->vtable)._9_HNIHOIAMDPC.method);
    (__this->fields).MGDEMNBPGIO = pGVar1;
    thunk_FUN_01c20e04(ppGVar3,pGVar1);
    if ((__this->fields).MGDEMNBPGIO == (Google_Protobuf_IMessage_o *)0x0) {
      iVar2 = 5;
      goto LAB_035dbee0;
    }
  }
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  CELOLGNMKCG = (System_String_o *)
                (*(__this->klass->vtable)._7_unknown.methodPtr)
                          (__this,(__this->klass->vtable)._7_unknown.method);
  pGVar1 = (__this->fields).MGDEMNBPGIO;
  BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 == (KKLJIDJBFEI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  KDPDBGNOFEN__KLNMLOOCAAO
            ((KDPDBGNOFEN_o *)__this_00,CELOLGNMKCG,pGVar1,BLMFLPJJMPF,0.0,(Il2CppObject *)0x0,
             (MethodInfo *)0x0);
  iVar2 = 3;
LAB_035dbee0:
  (__this->fields).IAAABJBDEMK = iVar2;
  return;
}

