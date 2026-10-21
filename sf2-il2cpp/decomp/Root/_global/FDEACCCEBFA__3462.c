// TypeDefIndex 3462
// Namespace: 
// public class FDEACCCEBFA : IEJKLPPLHMO
// Fields:

// ===== public bool ECKDICODLME()  [RVA 0x3569330]
// FDEACCCEBFA$$ECKDICODLME @ RVA 0x3569330

bool FDEACCCEBFA__ECKDICODLME(FDEACCCEBFA_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x3569338]
// FDEACCCEBFA$$DLKKPFHKIPB @ RVA 0x3569338

System_Collections_Generic_IEnumerable_string__o *
FDEACCCEBFA__DLKKPFHKIPB(FDEACCCEBFA_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_04568c15 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6463);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6464);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04568c15 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6463,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6464,(MethodInfo *)0x0);
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


// ===== public void .ctor()  [RVA 0x35694A8]
// FDEACCCEBFA$$.ctor @ RVA 0x35694A8

void FDEACCCEBFA___ctor(FDEACCCEBFA_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string IGMDDJFPIJL()  [RVA 0x35694B0]
// FDEACCCEBFA$$IGMDDJFPIJL @ RVA 0x35694B0

System_String_o * FDEACCCEBFA__IGMDDJFPIJL(FDEACCCEBFA_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04568c16 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_81);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6465);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04568c16 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6465,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_81,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x3569560]
// FDEACCCEBFA$$AJJLBBCJAAL @ RVA 0x3569560

System_String_o *
FDEACCCEBFA__AJJLBBCJAAL(FDEACCCEBFA_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Action_o *BLMFLPJJMPF;
  GOLIJCLCCBA_o *__this_01;
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *str2;
  Il2CppClass *pIVar3;
  char *pcVar4;
  System_String_o *pSVar5;
  System_String_o *str1;
  Il2CppObject *pIVar6;
  
  if ((DAT_04568c17 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6466);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6467);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6468);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6469);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&GOLIJCLCCBA_TypeInfo);
    FUN_01bab630(&Method_FDEACCCEBFA_MIHPFCOCNFF_IMEDHACBLGP__);
    FUN_01bab630(&FDEACCCEBFA_MIHPFCOCNFF_TypeInfo);
    DAT_04568c17 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(FDEACCCEBFA_MIHPFCOCNFF_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    pIVar6 = __this_00 + 1;
    pIVar6->klass = (Il2CppClass *)OPAEPDIIOEB;
    thunk_FUN_01c20e04(pIVar6,OPAEPDIIOEB);
    pIVar3 = pIVar6->klass;
    if (pIVar3 != (Il2CppClass *)0x0) {
      pcVar4 = (pIVar3->_1).namespaze;
      if (pcVar4 == (char *)0x0) {
        pSVar5 = ILEHGDDFOJP__JCHOLNEFBLD((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
        return pSVar5;
      }
      if ((int)pcVar4 != 0) {
        pSVar5 = (pIVar3->_1).byval_arg.data;
        BLMFLPJJMPF = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        __this_01 = (GOLIJCLCCBA_o *)thunk_FUN_01bda818(GOLIJCLCCBA_TypeInfo);
        GOLIJCLCCBA___ctor(__this_01,pSVar5,BLMFLPJJMPF,
                           (System_Collections_Generic_IList_string__o *)0x0,true,(MethodInfo *)0x0)
        ;
        JJPNLEPEAFM__ONJPOCDFDGK(__this_01,(MethodInfo *)0x0);
        pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar1,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6466,
                   (MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6467,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
        pIVar3 = __this_00[1].klass;
        if (pIVar3 == (Il2CppClass *)0x0) goto LAB_036697b8;
        if (*(int *)&(pIVar3->_1).namespaze != 0) {
          str1 = (pIVar3->_1).byval_arg.data;
          pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar1,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6468,
                     (MethodInfo *)0x0);
          pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar2,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6469,
                     (MethodInfo *)0x0);
          str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
          pSVar5 = System_String__Concat(pSVar5,str1,str2,(MethodInfo *)0x0);
          return pSVar5;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_036697b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x35697C8]
// FDEACCCEBFA$$KCBILPIAPHN @ RVA 0x35697C8

int32_t FDEACCCEBFA__KCBILPIAPHN(FDEACCCEBFA_o *__this,MethodInfo *method)

{
  return 1;
}

