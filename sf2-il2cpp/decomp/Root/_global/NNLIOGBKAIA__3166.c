// TypeDefIndex 3166
// Namespace: 
// public class NNLIOGBKAIA
// Fields:

// ===== public void .ctor()  [RVA 0x34E1288]
// NNLIOGBKAIA$$.ctor @ RVA 0x34E1288

void NNLIOGBKAIA___ctor(NNLIOGBKAIA_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string DPKNNBKIMDG(string GFJEGFFPLEF)  [RVA 0x34E1290]
// NNLIOGBKAIA$$DPKNNBKIMDG @ RVA 0x34E1290

System_String_o *
NNLIOGBKAIA__DPKNNBKIMDG(NNLIOGBKAIA_o *__this,System_String_o *GFJEGFFPLEF,MethodInfo *method)

{
  bool bVar1;
  System_Text_StringBuilder_o *__this_00;
  LEGDPJHPEOB_o *__this_01;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_02;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  System_String_o *pSVar3;
  long lVar4;
  System_Exception_o *__this_03;
  undefined8 uVar5;
  
  if ((DAT_04568735 & 1) == 0) {
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&LEGDPJHPEOB_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_266/*" = "*/);
    FUN_01bab630(&StringLiteral_18002/*"empty expression"*/);
    DAT_04568735 = 1;
  }
  __this_00 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty(GFJEGFFPLEF,(MethodInfo *)0x0);
  if (bVar1) {
    return StringLiteral_18002/*"empty expression"*/;
  }
  __this_01 = (LEGDPJHPEOB_o *)thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
  LEGDPJHPEOB___ctor(__this_01,(MethodInfo *)0x0);
  __this_02 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
  EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_02,(MethodInfo *)0x0);
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (pNVar2 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (__this_01 == (LEGDPJHPEOB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (__this_01->fields).AAJBIMFNMBB = (pNVar2->fields).QuestParameters;
  thunk_FUN_01c20e04();
  EILGGBOIMGE__KFMNMGGDHFD
            ((EILGGBOIMGE_o *)__this_01,GFJEGFFPLEF,__this_02,true,(System_String_o *)0x0,
             (MethodInfo *)0x0);
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04568807 == '\0') {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_04568807 = '\x01';
  }
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                    (MFBNFJGBPBB_TypeInfo->static_fields->OEOFMBEAELA,(MethodInfo *)0x0);
  if (!bVar1) {
    lVar4 = thunk_FUN_01bb9178(&MFBNFJGBPBB_TypeInfo);
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04568807 == '\0') {
      FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
      DAT_04568807 = '\x01';
    }
    if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = MFBNFJGBPBB_TypeInfo->static_fields->OEOFMBEAELA;
    thunk_FUN_01bb9178(&System_Exception_TypeInfo);
    __this_03 = (System_Exception_o *)thunk_FUN_01bda818();
    System_Exception___ctor(__this_03,pSVar3,(MethodInfo *)0x0);
    uVar5 = thunk_FUN_01bb9178(&Method_NNLIOGBKAIA_DPKNNBKIMDG__);
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(__this_03,uVar5);
  }
  if (__this_02 == (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar3 = (System_String_o *)
           (*(__this_02->klass->vtable)._3_ToString.methodPtr)
                     (__this_02,(__this_02->klass->vtable)._3_ToString.method);
  pSVar3 = System_String__Concat(GFJEGFFPLEF,StringLiteral_266/*" = "*/,pSVar3,(MethodInfo *)0x0);
  if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__AppendLine(__this_00,pSVar3,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x035e1474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar3 = (System_String_o *)
             (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                       (__this_00,(__this_00->klass->vtable)._3_ToString.method);
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

