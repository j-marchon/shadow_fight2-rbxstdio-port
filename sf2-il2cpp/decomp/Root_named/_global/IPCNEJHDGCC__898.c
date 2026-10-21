// TypeDefIndex 898
// Namespace: 
// public class IPCNEJHDGCC : IEJKLPPLHMO
// Fields:

// ===== public string IGMDDJFPIJL()  [RVA 0x3095EA8]
// IPCNEJHDGCC$$IGMDDJFPIJL @ RVA 0x3095EA8

System_String_o * IPCNEJHDGCC__IGMDDJFPIJL(IPCNEJHDGCC_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_045660d7 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_61);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5786);
    FUN_01bab630(&byte___TypeInfo);
    DAT_045660d7 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5786,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_61,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public bool ECKDICODLME()  [RVA 0x3095F58]
// IPCNEJHDGCC$$ECKDICODLME @ RVA 0x3095F58

bool IPCNEJHDGCC__ECKDICODLME(IPCNEJHDGCC_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x3095F60]
// IPCNEJHDGCC$$DLKKPFHKIPB @ RVA 0x3095F60

System_Collections_Generic_IEnumerable_string__o *
IPCNEJHDGCC__DLKKPFHKIPB(IPCNEJHDGCC_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_045660d8 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5787);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5788);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_045660d8 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5787,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5788,(MethodInfo *)0x0);
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


// ===== private void EKMCJKBJAKC(JCFJFJCKLKG NLKBNMDMJEB)  [RVA 0x30960D0]
// IPCNEJHDGCC$$EKMCJKBJAKC @ RVA 0x30960D0

void IPCNEJHDGCC__EKMCJKBJAKC(IPCNEJHDGCC_o *__this,JCFJFJCKLKG_o *NLKBNMDMJEB,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *__this_00;
  Il2CppObject *pIVar1;
  HCKCBFOGMMJ_o *__this_01;
  GKLPDMLELJF_o *pGVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  System_Object_array *args;
  Il2CppObject *pIVar6;
  long lVar7;
  undefined8 uVar8;
  int index;
  System_String_o *pSVar9;
  undefined4 local_70;
  int local_6c;
  void *local_68;
  
  if ((DAT_045660d9 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_62);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5789);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5790);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5791);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5792);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5793);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_get_Item__);
    DAT_045660d9 = 1;
  }
  if (NLKBNMDMJEB == (JCFJFJCKLKG_o *)0x0) {
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5789,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_62,(MethodInfo *)0x0);
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
    return;
  }
  __this_00 = (NLKBNMDMJEB->fields).LFOCACIGEFK;
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields).count <= index) {
        return;
      }
      pIVar1 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,index,
                          Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_get_Item__);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
      }
      __this_01 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
      if ((pIVar1 == (Il2CppObject *)0x0) || (__this_01 == (HCKCBFOGMMJ_o *)0x0)) break;
      pGVar2 = HCKCBFOGMMJ__LLEJFHJIBHC(__this_01,(int64_t)pIVar1[1].monitor,(MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      if (pGVar2 == (GKLPDMLELJF_o *)0x0) {
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5790,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5791,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        local_68 = pIVar1[1].monitor;
        pIVar6 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_68);
        local_6c = *(int *)&pIVar1[2].klass;
        pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_6c);
        pSVar5 = System_String__Format(pSVar5,pIVar6,pIVar1,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
      }
      else {
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5792,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5793,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
        local_6c = index + 1;
        pIVar6 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_6c);
        if (args == (System_Object_array *)0x0) break;
        if ((pIVar6 != (Il2CppObject *)0x0) &&
           (lVar7 = thunk_FUN_01bda71c(pIVar6,(((args->obj).klass)->_1).element_class), lVar7 == 0))
        {
LAB_03196594:
          uVar8 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar8,0);
        }
        if ((int)args->max_length == 0) {
LAB_03196590:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        args->m_Items[0] = pIVar6;
        thunk_FUN_01c20e04(args->m_Items,pIVar6);
        local_68 = pIVar1[1].monitor;
        pIVar6 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_68);
        if ((pIVar6 != (Il2CppObject *)0x0) &&
           (lVar7 = thunk_FUN_01bda71c(pIVar6,(((args->obj).klass)->_1).element_class), lVar7 == 0))
        goto LAB_03196594;
        if ((uint)args->max_length < 2) goto LAB_03196590;
        args->m_Items[1] = pIVar6;
        thunk_FUN_01c20e04(args->m_Items + 1,pIVar6);
        pSVar9 = (pGVar2->fields).FFOIEHLJLDA;
        if ((pSVar9 != (System_String_o *)0x0) &&
           (lVar7 = thunk_FUN_01bda71c(pSVar9,(((args->obj).klass)->_1).element_class), lVar7 == 0))
        goto LAB_03196594;
        if ((uint)args->max_length < 3) goto LAB_03196590;
        args->m_Items[2] = (Il2CppObject *)pSVar9;
        thunk_FUN_01c20e04(args->m_Items + 2,pSVar9);
        local_70 = *(undefined4 *)&pIVar1[2].klass;
        pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_70);
        if ((pIVar1 != (Il2CppObject *)0x0) &&
           (lVar7 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar7 == 0))
        goto LAB_03196594;
        if ((uint)args->max_length < 4) goto LAB_03196590;
        args->m_Items[3] = pIVar1;
        thunk_FUN_01c20e04(args->m_Items + 3,pIVar1);
        pSVar5 = System_String__Format(pSVar5,args,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__Log((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
      }
      index = index + 1;
      __this_00 = (NLKBNMDMJEB->fields).LFOCACIGEFK;
    } while (__this_00 != (Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30965A0]
// IPCNEJHDGCC$$.ctor @ RVA 0x30965A0

void IPCNEJHDGCC___ctor(IPCNEJHDGCC_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x30965A8]
// IPCNEJHDGCC$$KCBILPIAPHN @ RVA 0x30965A8

int32_t IPCNEJHDGCC__KCBILPIAPHN(IPCNEJHDGCC_o *__this,MethodInfo *method)

{
  return 0;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x30965B0]
// IPCNEJHDGCC$$AJJLBBCJAAL @ RVA 0x30965B0

System_String_o *
IPCNEJHDGCC__AJJLBBCJAAL(IPCNEJHDGCC_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  RaidLeaderboardsManager_o *__this_00;
  JCFJFJCKLKG_o *NLKBNMDMJEB;
  MethodInfo *method_00;
  
  if ((DAT_045660da & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5794);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5795);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5796);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5797);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045660da = 1;
  }
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5794,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5795,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
  if (__this_00 != (RaidLeaderboardsManager_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    NLKBNMDMJEB = RaidLeaderboardsManager__INGFDAFDMFG(__this_00,1,(MethodInfo *)0x0);
    IPCNEJHDGCC__EKMCJKBJAKC((IPCNEJHDGCC_o *)NLKBNMDMJEB,NLKBNMDMJEB,method_00);
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5796,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5797,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

