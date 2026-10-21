// AKADDLNNLKH$$POPGCEMGADA @ RVA 0x3397A60

void AKADDLNNLKH__POPGCEMGADA
               (AKADDLNNLKH_o *__this,HGLELMDNMMA_o *ODHOLHPKBAG,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  int32_t JCIDLNABHMN;
  int32_t iVar1;
  uint uVar2;
  bool_conflict bVar3;
  bool_conflict bVar4;
  undefined2 uVar5;
  int32_t iVar6;
  long lVar7;
  bool bVar8;
  HOGPIBHKJDL_o *__this_00;
  System_Collections_Generic_List_HOGPIBHKJDL__o *__this_01;
  System_Xml_XmlAttribute_o *pSVar9;
  MethodInfo *method_00;
  HOGPIBHKJDL_array *pHVar10;
  HGLELMDNMMA_o *pHVar11;
  System_Action_bool__o *pSVar12;
  System_String_o *pSVar13;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar14;
  int32_t local_24;
  
  method_00 = (MethodInfo *)(ulong)(uint)CJNHFNHJHPE;
  if ((DAT_04567c62 & 1) == 0) {
    FUN_01bab630(&HOGPIBHKJDL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOGPIBHKJDL>_Add__);
    DAT_04567c62 = 1;
  }
  if (ODHOLHPKBAG == (HGLELMDNMMA_o *)0x0) goto LAB_03497c1c;
  iVar1 = (ODHOLHPKBAG->fields)._MJMMFOPIGCL_k__BackingField;
  if (CJNHFNHJHPE <= iVar1) {
    iVar1 = CJNHFNHJHPE;
  }
  JCIDLNABHMN = 0;
  if (-1 < CJNHFNHJHPE) {
    JCIDLNABHMN = iVar1;
  }
  local_24 = JCIDLNABHMN;
  __this_00 = AKADDLNNLKH__PKFOJKHFKKL(__this,ODHOLHPKBAG,method_00);
  if (__this_00 == (HOGPIBHKJDL_o *)0x0) {
    __this_00 = (HOGPIBHKJDL_o *)thunk_FUN_01bda818(HOGPIBHKJDL_TypeInfo);
    HOGPIBHKJDL___ctor(__this_00,ODHOLHPKBAG,JCIDLNABHMN,(MethodInfo *)0x0);
    lVar7 = Method_System_Collections_Generic_List<HOGPIBHKJDL>_Add__;
    __this_01 = (__this->fields).INIAKIIBBHK;
    if (__this_01 == (System_Collections_Generic_List_HOGPIBHKJDL__o *)0x0) goto LAB_03497c1c;
    pHVar10 = (__this_01->fields)._items;
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    if (pHVar10 == (HOGPIBHKJDL_array *)0x0) goto LAB_03497c1c;
    uVar2 = (__this_01->fields)._size;
    if (uVar2 < (uint)pHVar10->max_length) {
      (__this_01->fields)._size = uVar2 + 1;
      pHVar10->m_Items[(int)uVar2] = __this_00;
      thunk_FUN_01c20e04(pHVar10->m_Items + (int)uVar2,__this_00);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
    if (__this_00 == (HOGPIBHKJDL_o *)0x0) goto LAB_03497c1c;
  }
  bVar3 = (__this_00->fields)._PKGCKALOMOF_k__BackingField.fields.fakeValueActive;
  bVar4 = (__this_00->fields)._PKGCKALOMOF_k__BackingField.fields.inited;
  uVar5 = *(undefined2 *)&(__this_00->fields)._PKGCKALOMOF_k__BackingField.fields.field_0xe;
  iVar1 = (__this_00->fields)._PKGCKALOMOF_k__BackingField.fields.currentCryptoKey;
  iVar6 = (__this_00->fields)._PKGCKALOMOF_k__BackingField.fields.hiddenValue;
  (__this_00->fields)._LJGJEGHMFAM_k__BackingField.fields.fakeValue =
       (__this_00->fields)._PKGCKALOMOF_k__BackingField.fields.fakeValue;
  (__this_00->fields)._LJGJEGHMFAM_k__BackingField.fields.fakeValueActive = bVar3;
  (__this_00->fields)._LJGJEGHMFAM_k__BackingField.fields.inited = bVar4;
  *(undefined2 *)&(__this_00->fields)._LJGJEGHMFAM_k__BackingField.fields.field_0xe = uVar5;
  (__this_00->fields)._LJGJEGHMFAM_k__BackingField.fields.currentCryptoKey = iVar1;
  (__this_00->fields)._LJGJEGHMFAM_k__BackingField.fields.hiddenValue = iVar6;
  CVar14 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(JCIDLNABHMN,(MethodInfo *)0x0)
  ;
  pHVar11 = (__this_00->fields)._IHKLCENNHPI_k__BackingField;
  (__this_00->fields)._PKGCKALOMOF_k__BackingField.fields = CVar14;
  if (pHVar11 != (HGLELMDNMMA_o *)0x0) {
    pSVar13 = (pHVar11->fields)._COIPKAKHDFP_k__BackingField;
    pSVar9 = EIABCPKDEBD__NHPDFFAIJMF((__this->fields).FJFDMMDMMGE,pSVar13,(MethodInfo *)0x0);
    bVar8 = EIABCPKDEBD__OBECCOPBADO(pSVar9,(MethodInfo *)0x0);
    if (bVar8) {
      EIABCPKDEBD__HBGAGFJBGKD((__this->fields).FJFDMMDMMGE,pSVar13,(MethodInfo *)0x0);
    }
    pSVar9 = EIABCPKDEBD__NHPDFFAIJMF((__this->fields).FJFDMMDMMGE,pSVar13,(MethodInfo *)0x0);
    pSVar13 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
    if (pSVar9 != (System_Xml_XmlAttribute_o *)0x0) {
      (*(pSVar9->klass->vtable)._10_set_Value.methodPtr)
                (pSVar9,pSVar13,(pSVar9->klass->vtable)._10_set_Value.method);
      pSVar12 = (__this->fields).HGGGOMEBMEN;
      if (pSVar12 != (System_Action_bool__o *)0x0) {
        (*(code *)(pSVar12->fields).super.super.invoke_impl)
                  ((pSVar12->fields).super.super.method_code,0,(pSVar12->fields).super.super.method)
        ;
                    /* try { // try from 03497c14 to 03597d4b has its CatchHandler @ 03497c14
                       catch() { ... } // from try @ 03497c14 with catch @ 03497c14
                       catch() { ... } // from try @ 03497d7c with catch @ 03497c14
                       catch() { ... } // from try @ 03497da4 with catch @ 03497c14
                       catch() { ... } // from try @ 03497dd0 with catch @ 03497c14
                       catch() { ... } // from try @ 03497e00 with catch @ 03497c14 */
        return;
      }
    }
  }
LAB_03497c1c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

