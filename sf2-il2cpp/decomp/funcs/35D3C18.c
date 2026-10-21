// GGLDGAAPKCF$$DHJGDFEMCKN @ RVA 0x35D3C18

void GGLDGAAPKCF__DHJGDFEMCKN
               (GGLDGAAPKCF_o *__this,SimpleJSON_JSONNode_o *FFJLPMFOGOI,bool IKBGIDDBNMP,
               MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *item;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  SimpleJSON_JSONNode_o *pSVar7;
  System_Collections_Generic_List_int__o *pSVar8;
  System_String_o *pSVar9;
  MethodInfo *a;
  GGLDGAAPKCF_c *method_00;
  long lVar10;
  GGLDGAAPKCF_o *extraout_x0;
  ACHLOMELAJE_o *__this_02;
  GGLDGAAPKCF_o *extraout_x0_00;
  MethodInfo *pMVar11;
  MethodInfo *in_x6;
  System_Int32_array *pSVar12;
  System_Object_array *pSVar13;
  UnityEngine_Object_o *x;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  undefined1 auStack_108 [72];
  SimpleJSON_JSONNode_Enumerator_Fields local_c0;
  int32_t local_6c;
  bool local_68 [4];
  bool local_64 [4];
  GGLDGAAPKCF_o *__this_01;
  
  if ((DAT_04568fed & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_764);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_765);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_766);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_767);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_768);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_769);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_770);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_771);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_772);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_773);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_774);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_775);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_776);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_777);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GGLDGAAPKCF_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JSONNode>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JSONNode>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<JSONNode>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_04568fed = 1;
  }
  local_6c = 0;
  local_c0.m_Array.fields._current = (SimpleJSON_JSONNode_o *)0x0;
  local_c0.m_Object.fields._getEnumeratorRetType = 0;
  local_c0.m_Object.fields._36_4_ = 0;
  local_c0.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_c0.m_Array.fields._index = 0;
  local_c0.m_Array.fields._version = 0;
  local_c0.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c0.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c0.type = 0;
  local_c0._4_4_ = 0;
  local_c0.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_c0.m_Object.fields._version = 0;
  local_c0.m_Object.fields._index = 0;
  local_64[0] = false;
  local_68[0] = false;
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JSONNode>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<JSONNode>__ctor__);
  if (FFJLPMFOGOI == (SimpleJSON_JSONNode_o *)0x0) {
LAB_036d44d8:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (*(FFJLPMFOGOI->klass->vtable)._30_unknown.methodPtr)
            (auStack_108,FFJLPMFOGOI,(FFJLPMFOGOI->klass->vtable)._30_unknown.method);
  pMVar11 = (MethodInfo *)0x48;
  memcpy(&local_c0,auStack_108,0x48);
  bVar2 = SimpleJSON_JSONNode_Enumerator__MoveNext
                    ((SimpleJSON_JSONNode_Enumerator_o *)&local_c0,(MethodInfo *)0x0);
  __this_01 = (GGLDGAAPKCF_o *)(ulong)bVar2;
  if (bVar2) {
    do {
      aKeyValue = SimpleJSON_JSONNode_Enumerator__get_Current
                            ((SimpleJSON_JSONNode_Enumerator_o *)&local_c0,(MethodInfo *)0x0);
      if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      item = (Il2CppObject *)SimpleJSON_JSONNode__op_Implicit(aKeyValue,(MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_764,(MethodInfo *)0x0
                );
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_765,(MethodInfo *)0x0
                );
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      if (item == (Il2CppObject *)0x0) goto LAB_036d44d8;
      pSVar7 = (SimpleJSON_JSONNode_o *)
               (*item->klass->vtable[7].methodPtr)(item,pSVar6,item->klass->vtable[7].method);
      local_6c = OGMFFOMHGIA__EHJNCGCICMP(pSVar7,0,(MethodInfo *)0x0);
      if (IKBGIDDBNMP) {
LAB_036d3f88:
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_768,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_769,
                   (MethodInfo *)0x0);
        pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        pSVar7 = (SimpleJSON_JSONNode_o *)
                 (*item->klass->vtable[7].methodPtr)(item,pSVar6,item->klass->vtable[7].method);
        a = (MethodInfo *)OGMFFOMHGIA__JPKEHIBGOEM(pSVar7,(System_String_o *)0x0,(MethodInfo *)0x0);
        pMVar11 = a;
        if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
          pMVar11 = (MethodInfo *)thunk_FUN_01ba7564(GGLDGAAPKCF_TypeInfo);
        }
        pSVar6 = GGLDGAAPKCF__CCADEBAHIBF(pMVar11);
        bVar2 = System_String__op_Equality((System_String_o *)a,pSVar6,(MethodInfo *)0x0);
        if (bVar2) {
LAB_036d4058:
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_770,
                     (MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_771,
                     (MethodInfo *)0x0);
          pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_772,
                     (MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_773,
                     (MethodInfo *)0x0);
          pMVar11 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
          pSVar9 = System_Int32__ToString((int32_t)&local_6c,(MethodInfo *)0x0);
          pSVar6 = System_String__Concat
                             (pSVar6,(System_String_o *)a,(System_String_o *)pMVar11,pSVar9,
                              (MethodInfo *)0x0);
          goto LAB_036d4138;
        }
        method_00 = GGLDGAAPKCF_TypeInfo;
        if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
          method_00 = (GGLDGAAPKCF_c *)thunk_FUN_01ba7564();
        }
        pSVar6 = GGLDGAAPKCF__NCKNDNLKHHJ((MethodInfo *)method_00);
        bVar2 = System_String__op_Equality((System_String_o *)a,pSVar6,(MethodInfo *)0x0);
        if (bVar2) goto LAB_036d4058;
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_774,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_775,
                   (MethodInfo *)0x0);
        pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        pSVar7 = (SimpleJSON_JSONNode_o *)
                 (*item->klass->vtable[7].methodPtr)(item,pSVar6,item->klass->vtable[7].method);
        pSVar6 = OGMFFOMHGIA__JPKEHIBGOEM(pSVar7,(System_String_o *)0x0,(MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_776,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_777,
                   (MethodInfo *)0x0);
        pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        pSVar7 = (SimpleJSON_JSONNode_o *)
                 (*item->klass->vtable[7].methodPtr)(item,pSVar9,item->klass->vtable[7].method);
        uVar3 = OGMFFOMHGIA__EHJNCGCICMP(pSVar7,0,(MethodInfo *)0x0);
        lVar10 = Method_System_Collections_Generic_List<int>_Add__;
        pMVar11 = (MethodInfo *)(ulong)uVar3;
        if (!IKBGIDDBNMP) {
          pSVar8 = (__this->fields).KNKAAIDGBJL;
          if (pSVar8 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_036d44d8;
          pSVar12 = (pSVar8->fields)._items;
          (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
          if (pSVar12 == (System_Int32_array *)0x0) goto LAB_036d44d8;
          uVar1 = (pSVar8->fields)._size;
          if (uVar1 < (uint)pSVar12->max_length) {
            (pSVar8->fields)._size = uVar1 + 1;
            pSVar12->m_Items[(int)uVar1] = local_6c;
          }
          else {
            System_Collections_Generic_List<int>__AddWithResize
                      (pSVar8,local_6c,
                       *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
        }
                    /* try { // try from 036d42f0 to 037d448f has its CatchHandler @ 036d42f0
                       catch() { ... } // from try @ 036d42f0 with catch @ 036d42f0
                       catch() { ... } // from try @ 036d4620 with catch @ 036d42f0
                       catch() { ... } // from try @ 036d46d4 with catch @ 036d42f0
                       catch() { ... } // from try @ 036d46dc with catch @ 036d42f0
                       catch() { ... } // from try @ 036d47b8 with catch @ 036d42f0 */
        GGLDGAAPKCF__MBLOPJIFOMC(__this,(System_String_o *)a,uVar3,pSVar6,local_64,local_68,in_x6);
        lVar10 = Method_System_Collections_Generic_List<JSONNode>_Add__;
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_036d44d8;
        pSVar13 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pSVar13 == (System_Object_array *)0x0) goto LAB_036d44d8;
        uVar3 = (__this_00->fields)._size;
        if (uVar3 < (uint)pSVar13->max_length) {
          (__this_00->fields)._size = uVar3 + 1;
          pSVar13->m_Items[(int)uVar3] = item;
          thunk_FUN_01c20e04(pSVar13->m_Items + (int)uVar3,item);
        }
        else {
          pMVar11 = *(MethodInfo **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_00,item,(MethodInfo_26E4DAC *)pMVar11);
        }
      }
      else {
        pSVar8 = (__this->fields).KNKAAIDGBJL;
        if (pSVar8 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_036d44d8;
        bVar2 = System_Collections_Generic_List<int>__Contains
                          (pSVar8,local_6c,Method_System_Collections_Generic_List<int>_Contains__);
        if (!bVar2) goto LAB_036d3f88;
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_766,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_767,
                   (MethodInfo *)0x0);
        pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        pSVar9 = System_Int32__ToString((int32_t)&local_6c,(MethodInfo *)0x0);
        pMVar11 = (MethodInfo *)0x0;
        pSVar6 = System_String__Concat(pSVar6,pSVar9,(MethodInfo *)0x0);
LAB_036d4138:
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__Log((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
      }
      bVar2 = SimpleJSON_JSONNode_Enumerator__MoveNext
                        ((SimpleJSON_JSONNode_Enumerator_o *)&local_c0,(MethodInfo *)0x0);
    } while (bVar2);
    __this_01 = (GGLDGAAPKCF_o *)0x0;
    if (local_64[0] != false) {
      lVar10 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01b81620();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01b81620();
      }
      x = (UnityEngine_Object_o *)**(undefined8 **)(lVar10 + 0xb8);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      pMVar11 = (MethodInfo *)0x0;
      bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      __this_01 = (GGLDGAAPKCF_o *)(ulong)bVar2;
      if (bVar2) {
        lVar10 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01b81620();
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01b81620();
        }
        if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar10 + 0xb8) ==
            (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) goto LAB_036d44d8;
        Nekki_SF2_GUI_Shop_ShopScene__Refresh
                  ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar10 + 0xb8),
                   (MethodInfo *)0x0);
        __this_01 = extraout_x0;
      }
    }
  }
  if (local_68[0] != false) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 036d4490 to 037d44b7 has its CatchHandler @ 036d4718 */
      thunk_FUN_01ba7564();
    }
    __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_02 == (ACHLOMELAJE_o *)0x0) goto LAB_036d44d8;
    pMVar11 = (MethodInfo *)0x0;
    CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_02,false,(MethodInfo *)0x0);
    __this_01 = extraout_x0_00;
  }
  GGLDGAAPKCF__LFNNJOLBMHN
            (__this_01,(System_Collections_Generic_List_JSONNode__o *)__this_00,pMVar11);
  return;
}

