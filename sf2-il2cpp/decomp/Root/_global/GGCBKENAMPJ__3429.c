// TypeDefIndex 3429
// Namespace: 
// public class GGCBKENAMPJ : IEJKLPPLHMO
// Fields:

// ===== public bool ECKDICODLME()  [RVA 0x3562948]
// GGCBKENAMPJ$$ECKDICODLME @ RVA 0x3562948

bool GGCBKENAMPJ__ECKDICODLME(GGCBKENAMPJ_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public string IGMDDJFPIJL()  [RVA 0x3562950]
// GGCBKENAMPJ$$IGMDDJFPIJL @ RVA 0x3562950

System_String_o * GGCBKENAMPJ__IGMDDJFPIJL(GGCBKENAMPJ_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04568bdd & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_69);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5957);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04568bdd = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5957,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_69,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x3562A00]
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


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x3562CFC]
// GGCBKENAMPJ$$KCBILPIAPHN @ RVA 0x3562CFC

int32_t GGCBKENAMPJ__KCBILPIAPHN(GGCBKENAMPJ_o *__this,MethodInfo *method)

{
  return 1;
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x3562D04]
// GGCBKENAMPJ$$DLKKPFHKIPB @ RVA 0x3562D04

System_Collections_Generic_IEnumerable_string__o *
GGCBKENAMPJ__DLKKPFHKIPB(GGCBKENAMPJ_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_04568bdf & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5964);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5965);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04568bdf = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5964,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5965,(MethodInfo *)0x0);
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3562E74]
// GGCBKENAMPJ$$.ctor @ RVA 0x3562E74

void GGCBKENAMPJ___ctor(GGCBKENAMPJ_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

