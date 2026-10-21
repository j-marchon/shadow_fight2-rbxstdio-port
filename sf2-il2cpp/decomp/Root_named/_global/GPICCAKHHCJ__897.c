// TypeDefIndex 897
// Namespace: 
// public class GPICCAKHHCJ : IEJKLPPLHMO
// Fields:

// ===== public void .ctor()  [RVA 0x3095880]
// GPICCAKHHCJ$$.ctor @ RVA 0x3095880

void GPICCAKHHCJ___ctor(GPICCAKHHCJ_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public bool ECKDICODLME()  [RVA 0x3095888]
// GPICCAKHHCJ$$ECKDICODLME @ RVA 0x3095888

bool GPICCAKHHCJ__ECKDICODLME(GPICCAKHHCJ_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x3095890]
// GPICCAKHHCJ$$KCBILPIAPHN @ RVA 0x3095890

int32_t GPICCAKHHCJ__KCBILPIAPHN(GPICCAKHHCJ_o *__this,MethodInfo *method)

{
  return 0;
}


// ===== public string IGMDDJFPIJL()  [RVA 0x3095898]
// GPICCAKHHCJ$$IGMDDJFPIJL @ RVA 0x3095898

System_String_o * GPICCAKHHCJ__IGMDDJFPIJL(GPICCAKHHCJ_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_045660d4 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy192___field_6);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4692);
    FUN_01bab630(&byte___TypeInfo);
    DAT_045660d4 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4692,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0xc0);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy192___field_6,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x3095948]
// GPICCAKHHCJ$$DLKKPFHKIPB @ RVA 0x3095948

System_Collections_Generic_IEnumerable_string__o *
GPICCAKHHCJ__DLKKPFHKIPB(GPICCAKHHCJ_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_045660d5 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4693);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4694);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_045660d5 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4693,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4694,(MethodInfo *)0x0);
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


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x3095AB8]
// GPICCAKHHCJ$$AJJLBBCJAAL @ RVA 0x3095AB8

/* WARNING: Type propagation algorithm not settling */

System_String_o *
GPICCAKHHCJ__AJJLBBCJAAL(GPICCAKHHCJ_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  System_Action_o *HJNIEEICBFA;
  System_RuntimeFieldHandle_Fields *pSVar5;
  System_String_o *a;
  
  if ((DAT_045660d6 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_ApplicationController_Quit__);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4695);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4696);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4697);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4698);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4699);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4700);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4701);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4702);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4703);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4704);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4705);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4706);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_045660d6 = 1;
  }
  if (OPAEPDIIOEB == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (OPAEPDIIOEB->max_length == 0) {
    pSVar4 = ILEHGDDFOJP__JCHOLNEFBLD((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
    return pSVar4;
  }
  if ((int)OPAEPDIIOEB->max_length != 0) {
    a = OPAEPDIIOEB->m_Items[0];
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4695,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4696,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(a,pSVar4,(MethodInfo *)0x0);
    if (bVar1) {
      if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      LHKALFIIJKB__DAFNBBJHFJL((System_Action_o *)0x0,(MethodInfo *)0x0);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4701,
                 (MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar5 = (System_RuntimeFieldHandle_Fields *)
               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4702;
    }
    else {
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4697,
                 (MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4698,
                 (MethodInfo *)0x0);
      pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(a,pSVar4,(MethodInfo *)0x0);
      if (bVar1) {
        HJNIEEICBFA = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        LHKALFIIJKB__PNHEMJHPGBF(HJNIEEICBFA,(MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4703,
                   (MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        pSVar5 = (System_RuntimeFieldHandle_Fields *)
                 &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4704;
      }
      else {
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4699,
                   (MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4700,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(a,pSVar4,(MethodInfo *)0x0);
        if (!bVar1) {
          pSVar4 = ILEHGDDFOJP__FNHHLCOFCBI((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
          return pSVar4;
        }
        if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        LHKALFIIJKB__LNGIKCILFFK((MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4705,
                   (MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        pSVar5 = (System_RuntimeFieldHandle_Fields *)
                 &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4706;
      }
    }
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,(System_RuntimeFieldHandle_o)pSVar5->value,(MethodInfo *)0x0
              );
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    return pSVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

