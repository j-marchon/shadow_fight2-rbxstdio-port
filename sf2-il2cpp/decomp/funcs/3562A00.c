// GGCBKENAMPJ$$AJJLBBCJAAL @ RVA 0x3562A00

/* WARNING: Type propagation algorithm not settling */

System_String_o *
GGCBKENAMPJ__AJJLBBCJAAL(GGCBKENAMPJ_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  uint16_t uVar3;
  System_String_o *pSVar4;
  System_Collections_Generic_List_byte__o *__this_00;
  long lVar5;
  System_Byte_array *pSVar6;
  System_Byte_array *LFINFBNOLFG;
  System_RuntimeFieldHandle_Fields *pSVar7;
  System_RuntimeFieldHandle_Fields *pSVar8;
  UnityEngine_Object_o *x;
  Nekki_SF2_GUI_Fight_FightScene_o *__this_01;
  int index;
  
  if ((DAT_04568bde & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5958);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5959);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5960);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5961);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5962);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5963);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<byte>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<byte>_ToArray__);
    FUN_01bab630(&Method_System_Collections_Generic_List<byte>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<byte>_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__);
    DAT_04568bde = 1;
  }
  pSVar4 = AJAMDCEKAFE__LFCNNAGLPHO(0,OPAEPDIIOEB,(MethodInfo *)0x0);
  bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar4,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar8 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5959;
    pSVar7 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5958;
LAB_03662c9c:
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,(System_RuntimeFieldHandle_o)pSVar7->value,(MethodInfo *)0x0
              );
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,(System_RuntimeFieldHandle_o)pSVar8->value,
               (MethodInfo *)0x0);
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,LFINFBNOLFG,(MethodInfo *)0x0);
    return pSVar4;
  }
  __this_00 = (System_Collections_Generic_List_byte__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<byte>_TypeInfo);
  System_Collections_Generic_List<byte>___ctor
            (__this_00,Method_System_Collections_Generic_List<byte>__ctor__);
  if (pSVar4 != (System_String_o *)0x0) {
    if (0 < (pSVar4->fields)._stringLength) {
      index = 0;
      do {
        uVar3 = System_String__get_Chars(pSVar4,index,(MethodInfo *)0x0);
        lVar5 = Method_System_Collections_Generic_List<byte>_Add__;
        if (__this_00 == (System_Collections_Generic_List_byte__o *)0x0) goto LAB_03662cf8;
        pSVar6 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pSVar6 == (System_Byte_array *)0x0) goto LAB_03662cf8;
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pSVar6->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pSVar6->m_Items[(int)uVar1] = uVar3 != 0x30;
        }
        else {
          System_Collections_Generic_List<byte>__AddWithResize
                    (__this_00,uVar3 != 0x30,
                     *(MethodInfo_26A2A7C **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        index = index + 1;
      } while (index < (pSVar4->fields)._stringLength);
    }
    lVar5 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01b81620();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01b81620();
    }
    x = (UnityEngine_Object_o *)**(undefined8 **)(lVar5 + 0xb8);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pSVar8 = (System_RuntimeFieldHandle_Fields *)
               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5963;
      pSVar7 = (System_RuntimeFieldHandle_Fields *)
               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5962;
      goto LAB_03662c9c;
    }
    lVar5 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01b81620();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01b81620();
    }
    if (__this_00 != (System_Collections_Generic_List_byte__o *)0x0) {
      __this_01 = (Nekki_SF2_GUI_Fight_FightScene_o *)**(undefined8 **)(lVar5 + 0xb8);
      pSVar6 = System_Collections_Generic_List<byte>__ToArray
                         (__this_00,Method_System_Collections_Generic_List<byte>_ToArray__);
      if (__this_01 != (Nekki_SF2_GUI_Fight_FightScene_o *)0x0) {
        Nekki_SF2_GUI_Fight_FightScene__SetRenderLayerMask(__this_01,pSVar6,(MethodInfo *)0x0);
        pSVar8 = (System_RuntimeFieldHandle_Fields *)
                 &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5961;
        pSVar7 = (System_RuntimeFieldHandle_Fields *)
                 &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5960;
        goto LAB_03662c9c;
      }
    }
  }
LAB_03662cf8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

