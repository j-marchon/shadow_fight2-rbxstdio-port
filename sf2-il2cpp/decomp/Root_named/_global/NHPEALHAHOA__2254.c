// TypeDefIndex 2254
// Namespace: 
// public class NHPEALHAHOA
// Fields:
//   public ObscuredFloat JHLJELAKADM; // 0x10
//   public ObscuredFloat GHKNFJJOIDM; // 0x24
//   public ObscuredInt EAFPDFHFBOM; // 0x38
//   public ModelParameters.DHMLCNEDMJM HPIDBKGJCAF; // 0x48

// ===== public static int AIIGLFJODCI(List<NHPEALHAHOA> NNBJFEPLHED, List<NHPEALHAHOA> HJCLPBKNLDP)  [RVA 0x32FDCBC]
// NHPEALHAHOA$$AIIGLFJODCI @ RVA 0x32FDCBC

int32_t NHPEALHAHOA__AIIGLFJODCI
                  (System_Collections_Generic_List_NHPEALHAHOA__o *NNBJFEPLHED,
                  System_Collections_Generic_List_NHPEALHAHOA__o *HJCLPBKNLDP,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int32_t iVar4;
  int32_t iVar5;
  Il2CppObject *pIVar6;
  NHPEALHAHOA_o *item;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  NHPEALHAHOA_array *pNVar7;
  int index;
  
  method_00 = (MethodInfo *)HJCLPBKNLDP;
  if ((DAT_04567704 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NHPEALHAHOA>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NHPEALHAHOA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NHPEALHAHOA>_get_Item__);
    DAT_04567704 = 1;
    method_00 = extraout_x1;
  }
  if (HJCLPBKNLDP != (System_Collections_Generic_List_NHPEALHAHOA__o *)0x0) {
    iVar1 = (HJCLPBKNLDP->fields)._size;
    iVar4 = NHPEALHAHOA__JKIMOHDDGKI(NNBJFEPLHED,method_00);
    if (NNBJFEPLHED != (System_Collections_Generic_List_NHPEALHAHOA__o *)0x0) {
      if (0 < (NNBJFEPLHED->fields)._size) {
        index = 0;
        do {
          pIVar6 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)NNBJFEPLHED,index,
                              Method_System_Collections_Generic_List<NHPEALHAHOA>_get_Item__);
          if (pIVar6 == (Il2CppObject *)0x0) goto LAB_033fde04;
          iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                              &pIVar6[3].monitor,(MethodInfo *)0x0);
          if (iVar5 == iVar4) {
            item = (NHPEALHAHOA_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)NNBJFEPLHED,index,
                              Method_System_Collections_Generic_List<NHPEALHAHOA>_get_Item__);
            lVar3 = Method_System_Collections_Generic_List<NHPEALHAHOA>_Add__;
            pNVar7 = (HJCLPBKNLDP->fields)._items;
            (HJCLPBKNLDP->fields)._version = (HJCLPBKNLDP->fields)._version + 1;
                    /* try { // try from 033fdd94 to 034fde47 has its CatchHandler @ 033fdd94
                       catch() { ... } // from try @ 033fdd94 with catch @ 033fdd94
                       catch() { ... } // from try @ 033fe134 with catch @ 033fdd94
                       catch() { ... } // from try @ 033fe1a0 with catch @ 033fdd94
                       catch() { ... } // from try @ 033fe284 with catch @ 033fdd94 */
            if (pNVar7 == (NHPEALHAHOA_array *)0x0) goto LAB_033fde04;
            uVar2 = (HJCLPBKNLDP->fields)._size;
            if (uVar2 < (uint)pNVar7->max_length) {
              (HJCLPBKNLDP->fields)._size = uVar2 + 1;
              pNVar7->m_Items[(int)uVar2] = item;
              thunk_FUN_01c20e04();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)HJCLPBKNLDP,
                         (Il2CppObject *)item,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
          index = index + 1;
        } while (index < (NNBJFEPLHED->fields)._size);
      }
      return (HJCLPBKNLDP->fields)._size - iVar1;
    }
  }
LAB_033fde04:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RandomizeObscuredVars()  [RVA 0x32FDEE8]
// NHPEALHAHOA$$RandomizeObscuredVars @ RVA 0x32FDEE8

void NHPEALHAHOA__RandomizeObscuredVars(NHPEALHAHOA_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_00;
  
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            (&(__this->fields).JHLJELAKADM,(MethodInfo *)0x0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            (&(__this->fields).GHKNFJJOIDM,(MethodInfo *)0x0);
  __this_00.fields.fakeValue = 0;
  __this_00.fields.fakeValueActive = false;
  __this_00.fields.inited = false;
  __this_00.fields._14_2_ = 0;
  __this_00.fields._0_8_ = &(__this->fields).EAFPDFHFBOM;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_00,in_x2);
  return;
}


// ===== public static int JKIMOHDDGKI(List<NHPEALHAHOA> MCLJFDHDMOD)  [RVA 0x32FDE08]
// NHPEALHAHOA$$JKIMOHDDGKI @ RVA 0x32FDE08

int32_t NHPEALHAHOA__JKIMOHDDGKI
                  (System_Collections_Generic_List_NHPEALHAHOA__o *MCLJFDHDMOD,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  Il2CppObject *pIVar3;
  int index;
  
  if ((DAT_04567705 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NHPEALHAHOA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NHPEALHAHOA>_get_Item__);
    DAT_04567705 = 1;
  }
  if (MCLJFDHDMOD == (System_Collections_Generic_List_NHPEALHAHOA__o *)0x0) {
LAB_033fdee4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 033fde48 to 034fde67 has its CatchHandler @ 033fe158 */
  if ((MCLJFDHDMOD->fields)._size < 1) {
    iVar2 = -0x80000000;
  }
  else {
    index = 0;
    iVar2 = -0x80000000;
    do {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)MCLJFDHDMOD,index,
                          Method_System_Collections_Generic_List<NHPEALHAHOA>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_033fdee4;
                    /* try { // try from 033fde78 to 034fde8b has its CatchHandler @ 033fe168 */
      iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)&pIVar3[3].monitor
                         ,(MethodInfo *)0x0);
      if (iVar2 < iVar1) {
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)MCLJFDHDMOD,index,
                            Method_System_Collections_Generic_List<NHPEALHAHOA>_get_Item__);
        if (pIVar3 == (Il2CppObject *)0x0) goto LAB_033fdee4;
                    /* try { // try from 033fdea4 to 034fdf3f has its CatchHandler @ 033fe16c */
        iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                            &pIVar3[3].monitor,(MethodInfo *)0x0);
      }
      index = index + 1;
    } while (index < (MCLJFDHDMOD->fields)._size);
  }
  return iVar2;
}


// ===== public void .ctor(NHPEALHAHOA JOHFLOEABJL)  [RVA 0x32FDF18]
// NHPEALHAHOA$$.ctor @ RVA 0x32FDF18

void NHPEALHAHOA___ctor(NHPEALHAHOA_o *__this,NHPEALHAHOA_o *JOHFLOEABJL,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined2 uVar2;
  CodeStage_AntiCheat_Common_ACTkByte4_o CVar3;
  float fVar4;
  int32_t iVar5;
  int32_t iVar6;
  bool_conflict bVar7;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (JOHFLOEABJL != (NHPEALHAHOA_o *)0x0) {
    bVar1 = (JOHFLOEABJL->fields).JHLJELAKADM.fields.inited;
    uVar2 = *(undefined2 *)&(JOHFLOEABJL->fields).JHLJELAKADM.fields.field_0x12;
    CVar3.fields = (JOHFLOEABJL->fields).JHLJELAKADM.fields.hiddenValueOldByte4.fields;
    fVar4 = (JOHFLOEABJL->fields).JHLJELAKADM.fields.fakeValue;
    iVar5 = (JOHFLOEABJL->fields).JHLJELAKADM.fields.currentCryptoKey;
    iVar6 = (JOHFLOEABJL->fields).JHLJELAKADM.fields.hiddenValue;
    (__this->fields).JHLJELAKADM.fields.fakeValueActive =
         (JOHFLOEABJL->fields).JHLJELAKADM.fields.fakeValueActive;
    (__this->fields).JHLJELAKADM.fields.inited = bVar1;
    *(undefined2 *)&(__this->fields).JHLJELAKADM.fields.field_0x12 = uVar2;
    (__this->fields).JHLJELAKADM.fields.hiddenValueOldByte4 =
         (CodeStage_AntiCheat_Common_ACTkByte4_o)CVar3.fields;
    (__this->fields).JHLJELAKADM.fields.fakeValue = fVar4;
    (__this->fields).JHLJELAKADM.fields.currentCryptoKey = iVar5;
    (__this->fields).JHLJELAKADM.fields.hiddenValue = iVar6;
    bVar1 = (JOHFLOEABJL->fields).GHKNFJJOIDM.fields.inited;
    uVar2 = *(undefined2 *)&(JOHFLOEABJL->fields).GHKNFJJOIDM.fields.field_0x12;
    CVar3.fields = (JOHFLOEABJL->fields).GHKNFJJOIDM.fields.hiddenValueOldByte4.fields;
    fVar4 = (JOHFLOEABJL->fields).GHKNFJJOIDM.fields.fakeValue;
    iVar5 = (JOHFLOEABJL->fields).GHKNFJJOIDM.fields.currentCryptoKey;
    iVar6 = (JOHFLOEABJL->fields).GHKNFJJOIDM.fields.hiddenValue;
                    /* try { // try from 033fdf4c to 034fdfbb has its CatchHandler @ 033fe170 */
    (__this->fields).GHKNFJJOIDM.fields.fakeValueActive =
         (JOHFLOEABJL->fields).GHKNFJJOIDM.fields.fakeValueActive;
    (__this->fields).GHKNFJJOIDM.fields.inited = bVar1;
    *(undefined2 *)&(__this->fields).GHKNFJJOIDM.fields.field_0x12 = uVar2;
    (__this->fields).GHKNFJJOIDM.fields.hiddenValueOldByte4 =
         (CodeStage_AntiCheat_Common_ACTkByte4_o)CVar3.fields;
    (__this->fields).GHKNFJJOIDM.fields.fakeValue = fVar4;
    (__this->fields).GHKNFJJOIDM.fields.currentCryptoKey = iVar5;
    (__this->fields).GHKNFJJOIDM.fields.hiddenValue = iVar6;
    bVar1 = (JOHFLOEABJL->fields).EAFPDFHFBOM.fields.fakeValueActive;
    bVar7 = (JOHFLOEABJL->fields).EAFPDFHFBOM.fields.inited;
    uVar2 = *(undefined2 *)&(JOHFLOEABJL->fields).EAFPDFHFBOM.fields.field_0xe;
    iVar5 = (JOHFLOEABJL->fields).EAFPDFHFBOM.fields.currentCryptoKey;
    iVar6 = (JOHFLOEABJL->fields).EAFPDFHFBOM.fields.hiddenValue;
    (__this->fields).EAFPDFHFBOM.fields.fakeValue =
         (JOHFLOEABJL->fields).EAFPDFHFBOM.fields.fakeValue;
    (__this->fields).EAFPDFHFBOM.fields.fakeValueActive = bVar1;
    (__this->fields).EAFPDFHFBOM.fields.inited = bVar7;
    *(undefined2 *)&(__this->fields).EAFPDFHFBOM.fields.field_0xe = uVar2;
    (__this->fields).EAFPDFHFBOM.fields.currentCryptoKey = iVar5;
    (__this->fields).EAFPDFHFBOM.fields.hiddenValue = iVar6;
    (__this->fields).HPIDBKGJCAF = (JOHFLOEABJL->fields).HPIDBKGJCAF;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32FDF74]
// NHPEALHAHOA$$.ctor @ RVA 0x32FDF74

void NHPEALHAHOA___ctor(NHPEALHAHOA_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_68;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_50;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_30;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_50,0.0,(MethodInfo *)0x0);
  local_30.fakeValueActive = local_50.fakeValueActive;
  local_30.inited = local_50.inited;
  local_30._18_2_ = local_50._18_2_;
  local_30.hiddenValueOldByte4.fields = local_50.hiddenValueOldByte4.fields;
  local_30.fakeValue = local_50.fakeValue;
  local_30.currentCryptoKey = local_50.currentCryptoKey;
  local_30.hiddenValue = local_50.hiddenValue;
  (__this->fields).JHLJELAKADM.fields.fakeValueActive = local_50.fakeValueActive;
  (__this->fields).JHLJELAKADM.fields.inited = local_50.inited;
  *(undefined2 *)&(__this->fields).JHLJELAKADM.fields.field_0x12 = local_50._18_2_;
  (__this->fields).JHLJELAKADM.fields.hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)local_50.hiddenValueOldByte4.fields;
  (__this->fields).JHLJELAKADM.fields.fakeValue = local_50.fakeValue;
  (__this->fields).JHLJELAKADM.fields.currentCryptoKey = local_50.currentCryptoKey;
  (__this->fields).JHLJELAKADM.fields.hiddenValue = local_50.hiddenValue;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_68,0.0,(MethodInfo *)0x0);
                    /* try { // try from 033fdfd0 to 034fdfd7 has its CatchHandler @ 033fe154 */
  local_50.fakeValueActive = local_68.fakeValueActive;
  local_50.inited = local_68.inited;
  local_50._18_2_ = local_68._18_2_;
  local_50.hiddenValueOldByte4.fields = local_68.hiddenValueOldByte4.fields;
  local_50.fakeValue = local_68.fakeValue;
  local_50.currentCryptoKey = local_68.currentCryptoKey;
  local_50.hiddenValue = local_68.hiddenValue;
  (__this->fields).GHKNFJJOIDM.fields.fakeValueActive = local_68.fakeValueActive;
  (__this->fields).GHKNFJJOIDM.fields.inited = local_68.inited;
  *(undefined2 *)&(__this->fields).GHKNFJJOIDM.fields.field_0x12 = local_68._18_2_;
  (__this->fields).GHKNFJJOIDM.fields.hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)local_68.hiddenValueOldByte4.fields;
  (__this->fields).GHKNFJJOIDM.fields.fakeValue = local_68.fakeValue;
  (__this->fields).GHKNFJJOIDM.fields.currentCryptoKey = local_68.currentCryptoKey;
  (__this->fields).GHKNFJJOIDM.fields.hiddenValue = local_68.hiddenValue;
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
                    /* try { // try from 033fdfe8 to 034fdfef has its CatchHandler @ 033fe150 */
  (__this->fields).EAFPDFHFBOM.fields = CVar1;
  (__this->fields).HPIDBKGJCAF = 2;
                    /* try { // try from 033fdff4 to 034fdffb has its CatchHandler @ 033fe14c */
  return;
}

