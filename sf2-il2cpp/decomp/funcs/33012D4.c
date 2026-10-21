// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$AJNAFLOFLMF @ RVA 0x33012D4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__AJNAFLOFLMF
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int *piVar1;
  System_Action_KEFHDOHHHML__o *CPECAEHDDDB;
  Nekki_SF2_GUI_Dialogs_SimpleDialog_o **ppNVar2;
  ClanLogoImage_o **ppCVar3;
  undefined8 uVar4;
  bool bVar5;
  BKKENCMPLLF_o *__this_00;
  int iVar6;
  int local_34;
  
                    /* try { // try from 034012d8 to 0350137b has its CatchHandler @ 03400db0 */
  if ((DAT_04567721 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    DAT_04567721 = 1;
  }
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
    iVar6 = 0;
  }
  else {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar1 = (int *)thunk_FUN_01bda96c();
    iVar6 = *piVar1;
    if (iVar6 != 0) {
      __this_00 = (__this->fields).FLLHHEODKPH;
      bVar5 = false;
      if (__this_00 != (BKKENCMPLLF_o *)0x0) {
        CPECAEHDDDB = (System_Action_KEFHDOHHHML__o *)
                      thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
        System_Action<object>___ctor();
                    /* try { // try from 0340137c to 03501383 has its CatchHandler @ 034013d8 */
                    /* try { // try from 03401384 to 03501387 has its CatchHandler @ 034013c8 */
                    /* try { // try from 03401388 to 0350138b has its CatchHandler @ 034013c0 */
        BKKENCMPLLF__KGIPHDHPGDL(__this_00,CPECAEHDDDB,(MethodInfo *)0x0);
                    /* try { // try from 0340138c to 0350138f has its CatchHandler @ 034013bc */
        bVar5 = false;
                    /* try { // try from 03401390 to 03501397 has its CatchHandler @ 034013e4 */
      }
      goto LAB_0340139c;
    }
  }
                    /* try { // try from 03401398 to 0350139b has its CatchHandler @ 03400db0 */
  bVar5 = true;
LAB_0340139c:
                    /* try { // try from 0340139c to 0350139f has its CatchHandler @ 034013a8 */
  ppNVar2 = &(__this->fields).LBFACKCBBOD;
                    /* try { // try from 034013a0 to 03501407 has its CatchHandler @ 03400db0 */
  *ppNVar2 = (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *)0x0;
                    /* catch() { ... } // from try @ 0340139c with catch @ 034013a8 */
  thunk_FUN_01c20e04(ppNVar2,0);
  ppCVar3 = &(__this->fields).NCEGFHDDGOO;
                    /* catch() { ... } // from try @ 034011e8 with catch @ 034013ac */
                    /* catch() { ... } // from try @ 034012b4 with catch @ 034013b0 */
  *ppCVar3 = (ClanLogoImage_o *)0x0;
                    /* catch() { ... } // from try @ 03401194 with catch @ 034013b4 */
                    /* catch() { ... } // from try @ 03401184 with catch @ 034013b8 */
  thunk_FUN_01c20e04(ppCVar3,0);
                    /* catch() { ... } // from try @ 0340138c with catch @ 034013bc */
  if (!bVar5) {
                    /* catch() { ... } // from try @ 03401388 with catch @ 034013c0 */
                    /* catch() { ... } // from try @ 03401218 with catch @ 034013c4 */
    local_34 = iVar6;
                    /* catch() { ... } // from try @ 03401384 with catch @ 034013c8 */
                    /* catch() { ... } // from try @ 03401160 with catch @ 034013cc */
    uVar4 = thunk_FUN_01bda448(int_TypeInfo,&local_34);
                    /* catch() { ... } // from try @ 03401148 with catch @ 034013d0 */
                    /* catch() { ... } // from try @ 03401174 with catch @ 034013d4 */
                    /* catch() { ... } // from try @ 0340137c with catch @ 034013d8 */
                    /* catch() { ... } // from try @ 034010e0 with catch @ 034013dc */
                    /* catch() { ... } // from try @ 03401084 with catch @ 034013e0 */
                    /* catch() { ... } // from try @ 03401390 with catch @ 034013e4 */
    (*(__this->klass->vtable)._13_OnClose.methodPtr)
              (__this,uVar4,(__this->klass->vtable)._13_OnClose.method);
  }
                    /* catch() { ... } // from try @ 034011ac with catch @ 034013e8 */
  return;
}

