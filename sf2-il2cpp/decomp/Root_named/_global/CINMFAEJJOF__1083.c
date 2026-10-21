// TypeDefIndex 1083
// Namespace: 
// public class CINMFAEJJOF
// Fields:
//   private Action<int> JHJBEMDEEHG; // 0x10
//   private ObscuredInt HLNIJGJDDEE; // 0x18
//   private ObscuredInt NELAFECPDOE; // 0x28
//   private int CCHIKFOPFCA; // 0x38
//   private ObscuredInt KBIOJGFPIBJ; // 0x3C
//   private ObscuredBool IPMGLPNEBJH; // 0x4C

// ===== public int BHIHCKDOJKB()  [RVA 0x30E05C0]
// CINMFAEJJOF$$BHIHCKDOJKB @ RVA 0x30E05C0

int32_t CINMFAEJJOF__BHIHCKDOJKB(CINMFAEJJOF_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).HLNIJGJDDEE.fields,(MethodInfo *)0x0);
  return iVar1;
}


// ===== public int MNCAANNBJED()  [RVA 0x30E05D0]
// CINMFAEJJOF$$MNCAANNBJED @ RVA 0x30E05D0

int32_t CINMFAEJJOF__MNCAANNBJED(CINMFAEJJOF_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).NELAFECPDOE.fields,(MethodInfo *)0x0);
  return iVar1;
}


// ===== public void PLKJEICMFDC(Action<int> CJNHFNHJHPE)  [RVA 0x30E05E0]
// CINMFAEJJOF$$PLKJEICMFDC @ RVA 0x30E05E0

void CINMFAEJJOF__PLKJEICMFDC
               (CINMFAEJJOF_o *__this,System_Action_int__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_int__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_int__o *pSVar5;
  System_Action_int__o *source;
  
  if ((DAT_04566397 & 1) == 0) {
    FUN_01bab630(&System_Action<int>_TypeInfo);
    DAT_04566397 = 1;
  }
  source = (__this->fields).JHJBEMDEEHG;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<int>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<int>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_int__o *)FUN_01c07368(&__this->fields,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void CMGKIHDJPDL(Action<int> CJNHFNHJHPE)  [RVA 0x30E0690]
// CINMFAEJJOF$$CMGKIHDJPDL @ RVA 0x30E0690

void CINMFAEJJOF__CMGKIHDJPDL
               (CINMFAEJJOF_o *__this,System_Action_int__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_int__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_int__o *pSVar5;
  System_Action_int__o *a;
  
  if ((DAT_04566398 & 1) == 0) {
    FUN_01bab630(&System_Action<int>_TypeInfo);
    DAT_04566398 = 1;
  }
  a = (__this->fields).JHJBEMDEEHG;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<int>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<int>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_int__o *)FUN_01c07368(&__this->fields,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void DGLJCGNHLIG()  [RVA 0x30E0740]
// CINMFAEJJOF$$DGLJCGNHLIG @ RVA 0x30E0740

void CINMFAEJJOF__DGLJCGNHLIG(CINMFAEJJOF_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar2;
  
  CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(false,(MethodInfo *)0x0);
  (__this->fields).IPMGLPNEBJH.fields = CVar2;
  (__this->fields).CCHIKFOPFCA = 0;
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
  (__this->fields).NELAFECPDOE.fields = CVar1;
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
  (__this->fields).HLNIJGJDDEE.fields = CVar1;
  return;
}


// ===== public void .ctor()  [RVA 0x30E0788]
// CINMFAEJJOF$$.ctor @ RVA 0x30E0788

void CINMFAEJJOF___ctor(CINMFAEJJOF_o *__this,MethodInfo *method)

{
  System_Action_int__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_int__o *pSVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar3;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar4;
  
  if ((DAT_04566399 & 1) == 0) {
    FUN_01bab630(&System_Action<int>_TypeInfo);
    FUN_01bab630(&Method_CINMFAEJJOF_<>c_KMPAHBPEMPC__);
    FUN_01bab630(&CINMFAEJJOF_<>c_TypeInfo);
    DAT_04566399 = 1;
    method = extraout_x1;
  }
  if ((CINMFAEJJOF_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CINMFAEJJOF_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = CINMFAEJJOF_<>c_TypeInfo->static_fields->__9__20_0;
  if (pSVar2 == (System_Action_int__o *)0x0) {
    if ((CINMFAEJJOF_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(CINMFAEJJOF_<>c_TypeInfo,method);
    }
    pSVar2 = (System_Action_int__o *)thunk_FUN_01bda818(System_Action<int>_TypeInfo);
    System_Action<int>___ctor();
    ppSVar1 = &CINMFAEJJOF_<>c_TypeInfo->static_fields->__9__20_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  if (__this != (CINMFAEJJOF_o *)0x0) {
    (__this->fields).JHJBEMDEEHG = pSVar2;
    thunk_FUN_01c20e04(&__this->fields,pSVar2);
    CVar3 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
    (__this->fields).HLNIJGJDDEE.fields = CVar3;
    CVar3 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
    (__this->fields).NELAFECPDOE.fields = CVar3;
    CVar3 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
    (__this->fields).KBIOJGFPIBJ.fields = CVar3;
    CVar4 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(false,(MethodInfo *)0x0);
    (__this->fields).IPMGLPNEBJH.fields = CVar4;
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LKIBNJGCNKE()  [RVA 0x30E08C8]
// CINMFAEJJOF$$LKIBNJGCNKE @ RVA 0x30E08C8

void CINMFAEJJOF__LKIBNJGCNKE(CINMFAEJJOF_o *__this,MethodInfo *method)

{
  System_Action_int__o *pSVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  undefined2 uVar4;
  int32_t iVar5;
  int32_t iVar6;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *pCVar7;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar8;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar9;
  
  if ((DAT_0456639a & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_0456639a = 1;
  }
  CVar9 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(true,(MethodInfo *)0x0);
  pCVar7 = &(__this->fields).NELAFECPDOE;
  CVar8 = pCVar7->fields;
  (__this->fields).IPMGLPNEBJH.fields = CVar9;
  (__this->fields).CCHIKFOPFCA = 0;
  CVar8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__CIJLADMHKHJ
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)CVar8,(MethodInfo *)0x0);
  pCVar7->fields = CVar8;
  iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)CVar8,(MethodInfo *)0x0);
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GameUtils_TypeInfo);
  }
  iVar6 = GameUtils__BHIHCKDOJKB((MethodInfo *)0x0);
  if (iVar5 < iVar6) {
    return;
  }
  bVar2 = (__this->fields).NELAFECPDOE.fields.fakeValueActive;
  bVar3 = (__this->fields).NELAFECPDOE.fields.inited;
  uVar4 = *(undefined2 *)&(__this->fields).NELAFECPDOE.fields.field_0xe;
  iVar5 = (pCVar7->fields).currentCryptoKey;
  iVar6 = (pCVar7->fields).hiddenValue;
  (__this->fields).HLNIJGJDDEE.fields.fakeValue = (__this->fields).NELAFECPDOE.fields.fakeValue;
  (__this->fields).HLNIJGJDDEE.fields.fakeValueActive = bVar2;
  (__this->fields).HLNIJGJDDEE.fields.inited = bVar3;
  *(undefined2 *)&(__this->fields).HLNIJGJDDEE.fields.field_0xe = uVar4;
  (__this->fields).HLNIJGJDDEE.fields.currentCryptoKey = iVar5;
  (__this->fields).HLNIJGJDDEE.fields.hiddenValue = iVar6;
  bVar2 = (__this->fields).NELAFECPDOE.fields.fakeValueActive;
  bVar3 = (__this->fields).NELAFECPDOE.fields.inited;
  uVar4 = *(undefined2 *)&(__this->fields).NELAFECPDOE.fields.field_0xe;
  iVar5 = (pCVar7->fields).currentCryptoKey;
  iVar6 = (pCVar7->fields).hiddenValue;
  pSVar1 = (__this->fields).JHJBEMDEEHG;
  CVar8 = (__this->fields).HLNIJGJDDEE.fields;
  (__this->fields).KBIOJGFPIBJ.fields.fakeValue = (__this->fields).NELAFECPDOE.fields.fakeValue;
  (__this->fields).KBIOJGFPIBJ.fields.fakeValueActive = bVar2;
  (__this->fields).KBIOJGFPIBJ.fields.inited = bVar3;
  *(undefined2 *)&(__this->fields).KBIOJGFPIBJ.fields.field_0xe = uVar4;
  (__this->fields).KBIOJGFPIBJ.fields.currentCryptoKey = iVar5;
  (__this->fields).KBIOJGFPIBJ.fields.hiddenValue = iVar6;
  iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)CVar8,(MethodInfo *)0x0);
  if (pSVar1 != (System_Action_int__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031e09ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,iVar5,(pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RandomizeObscuredVars()  [RVA 0x30E09B4]
// CINMFAEJJOF$$RandomizeObscuredVars @ RVA 0x30E09B4

void CINMFAEJJOF__RandomizeObscuredVars(CINMFAEJJOF_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_01;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_02;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o __this_03;
  
  __this_00.fields.fakeValue = 0;
  __this_00.fields.fakeValueActive = false;
  __this_00.fields.inited = false;
  __this_00.fields._14_2_ = 0;
  __this_00.fields._0_8_ = &(__this->fields).HLNIJGJDDEE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_00,in_x2);
  __this_01.fields.fakeValue = 0;
  __this_01.fields.fakeValueActive = false;
  __this_01.fields.inited = false;
  __this_01.fields._14_2_ = 0;
  __this_01.fields._0_8_ = &(__this->fields).NELAFECPDOE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_01,in_x2);
  __this_02.fields.fakeValue = 0;
  __this_02.fields.fakeValueActive = false;
  __this_02.fields.inited = false;
  __this_02.fields._14_2_ = 0;
  __this_02.fields._0_8_ = &(__this->fields).KBIOJGFPIBJ;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_02,in_x2);
  __this_03.fields.fakeValue = false;
  __this_03.fields.inited = false;
  __this_03.fields.fakeValueActive = false;
  __this_03.fields._11_1_ = 0;
  __this_03.fields._0_8_ = &(__this->fields).IPMGLPNEBJH;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__GPJJDLBJOAL(__this_03,in_x2);
  return;
}


// ===== public int KEIGLHIGINN()  [RVA 0x30E09F0]
// CINMFAEJJOF$$KEIGLHIGINN @ RVA 0x30E09F0

int32_t CINMFAEJJOF__KEIGLHIGINN(CINMFAEJJOF_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).KBIOJGFPIBJ.fields,(MethodInfo *)0x0);
  return iVar1;
}


// ===== public void JMIDDFHCLDO()  [RVA 0x30E0A04]
// CINMFAEJJOF$$JMIDDFHCLDO @ RVA 0x30E0A04

void CINMFAEJJOF__JMIDDFHCLDO(CINMFAEJJOF_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Action_int__o *pSVar2;
  bool_conflict bVar3;
  bool_conflict bVar4;
  undefined2 uVar5;
  bool bVar6;
  int32_t iVar7;
  int32_t iVar8;
  MethodInfo *method_00;
  
  if ((DAT_0456639b & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_0456639b = 1;
  }
  bVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                     (__this->fields).IPMGLPNEBJH.fields,(MethodInfo *)0x0);
  if (bVar6) {
    iVar1 = (__this->fields).CCHIKFOPFCA + 1;
    (__this->fields).CCHIKFOPFCA = iVar1;
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar7 = GameUtils__EOJFKNELJMG((MethodInfo *)0x0);
    if (iVar7 < iVar1) {
      bVar3 = (__this->fields).HLNIJGJDDEE.fields.fakeValueActive;
      bVar4 = (__this->fields).HLNIJGJDDEE.fields.inited;
      uVar5 = *(undefined2 *)&(__this->fields).HLNIJGJDDEE.fields.field_0xe;
      iVar7 = (__this->fields).HLNIJGJDDEE.fields.currentCryptoKey;
      iVar8 = (__this->fields).HLNIJGJDDEE.fields.hiddenValue;
      (__this->fields).KBIOJGFPIBJ.fields.fakeValue = (__this->fields).HLNIJGJDDEE.fields.fakeValue;
      (__this->fields).KBIOJGFPIBJ.fields.fakeValueActive = bVar3;
      (__this->fields).KBIOJGFPIBJ.fields.inited = bVar4;
      *(undefined2 *)&(__this->fields).KBIOJGFPIBJ.fields.field_0xe = uVar5;
      (__this->fields).KBIOJGFPIBJ.fields.currentCryptoKey = iVar7;
      (__this->fields).KBIOJGFPIBJ.fields.hiddenValue = iVar8;
      CINMFAEJJOF__DGLJCGNHLIG(__this,method_00);
      iVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (__this->fields).KBIOJGFPIBJ.fields,(MethodInfo *)0x0);
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(GameUtils_TypeInfo);
      }
      iVar8 = GameUtils__BHIHCKDOJKB((MethodInfo *)0x0);
      if (iVar8 <= iVar7) {
        pSVar2 = (__this->fields).JHJBEMDEEHG;
        iVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (__this->fields).HLNIJGJDDEE.fields,(MethodInfo *)0x0);
        if (pSVar2 != (System_Action_int__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031e0af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(pSVar2->fields).super.super.invoke_impl)
                    ((pSVar2->fields).super.super.method_code,iVar7,
                     (pSVar2->fields).super.super.method);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
  return;
}


// ===== public bool CHIADEGKHLB()  [RVA 0x30E0B00]
// CINMFAEJJOF$$CHIADEGKHLB @ RVA 0x30E0B00

bool CINMFAEJJOF__CHIADEGKHLB(CINMFAEJJOF_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                     (__this->fields).IPMGLPNEBJH.fields,(MethodInfo *)0x0);
  return bVar1;
}

