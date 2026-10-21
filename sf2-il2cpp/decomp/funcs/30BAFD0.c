// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanEditDialog$$EAIIDFHIBHB @ RVA 0x30BAFD0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanEditDialog__EAIIDFHIBHB
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanEditDialog_o *__this,MethodInfo *method)

{
  ulong uVar1;
  System_Action_KEFHDOHHHML__o *CPECAEHDDDB;
  undefined8 uVar2;
  BKKENCMPLLF_o *__this_00;
  undefined4 local_24;
  
  if ((DAT_0456623c & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    DAT_0456623c = 1;
  }
  uVar1 = (*(__this->klass->vtable)._39_LLKLEHBDELH.methodPtr)
                    (__this,(__this->klass->vtable)._39_LLKLEHBDELH.method);
  if ((uVar1 & 1) != 0) {
    __this_00 = (__this->fields).super.FLLHHEODKPH;
    CPECAEHDDDB = (System_Action_KEFHDOHHHML__o *)
                  thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_00 == (BKKENCMPLLF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    BKKENCMPLLF__AEBIEHGBGCL(__this_00,CPECAEHDDDB,(MethodInfo *)0x0);
    local_24 = 1;
    uVar2 = thunk_FUN_01bda448(int_TypeInfo,&local_24);
    (*(__this->klass->vtable)._13_OnClose.methodPtr)
              (__this,uVar2,(__this->klass->vtable)._13_OnClose.method);
  }
  return;
}

