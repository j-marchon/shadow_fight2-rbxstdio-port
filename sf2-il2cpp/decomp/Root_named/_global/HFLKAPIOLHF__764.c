// TypeDefIndex 764
// Namespace: 
// public class HFLKAPIOLHF : FKGKBFENGPJ
// Fields:

// ===== protected override bool KEMGPEDFALK(IEJKLPPLHMO EFENHAFFBAG)  [RVA 0x3050690]
// HFLKAPIOLHF$$KEMGPEDFALK @ RVA 0x3050690

bool HFLKAPIOLHF__KEMGPEDFALK(HFLKAPIOLHF_o *__this,IEJKLPPLHMO_o *EFENHAFFBAG,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  IEJKLPPLHMO_c *pIVar3;
  ulong uVar4;
  int32_t *piVar5;
  
  if ((DAT_04565e48 & 1) == 0) {
    __this = (HFLKAPIOLHF_o *)FUN_01bab630(&IEJKLPPLHMO_TypeInfo);
    DAT_04565e48 = 1;
  }
  if (EFENHAFFBAG == (IEJKLPPLHMO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  pIVar3 = EFENHAFFBAG->klass;
  uVar1._0_1_ = (pIVar3->_2).rank;
  uVar1._1_1_ = (pIVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pIVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)IEJKLPPLHMO_TypeInfo) {
        pVVar2 = pIVar3->vtable + (*piVar5 + 3);
        goto LAB_03150718;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(EFENHAFFBAG,IEJKLPPLHMO_TypeInfo,3);
LAB_03150718:
  uVar4 = (*pVVar2->methodPtr)(EFENHAFFBAG,pVVar2->method);
  return (uVar4 & 1) == 0;
}


// ===== public void .ctor(Func<IEnumerable<IEJKLPPLHMO>> OICNJPOHFIL)  [RVA 0x305073C]
// HFLKAPIOLHF$$.ctor @ RVA 0x305073C

void HFLKAPIOLHF___ctor(HFLKAPIOLHF_o *__this,System_Func_IEnumerable_IEJKLPPLHMO___o *OICNJPOHFIL,
                       MethodInfo *method)

{
  FKGKBFENGPJ___ctor((FKGKBFENGPJ_o *)__this,OICNJPOHFIL,(MethodInfo *)0x0);
  return;
}


// ===== public override IEnumerable<string> DLKKPFHKIPB()  [RVA 0x3050744]
// HFLKAPIOLHF$$DLKKPFHKIPB @ RVA 0x3050744

System_Collections_Generic_IEnumerable_string__o *
HFLKAPIOLHF__DLKKPFHKIPB(HFLKAPIOLHF_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_04565e49 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4844);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4845);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04565e49 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4844,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4845,(MethodInfo *)0x0);
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


// ===== public override string IGMDDJFPIJL()  [RVA 0x30508B4]
// HFLKAPIOLHF$$IGMDDJFPIJL @ RVA 0x30508B4

System_String_o * HFLKAPIOLHF__IGMDDJFPIJL(HFLKAPIOLHF_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04565e4a & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_54);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4846);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04565e4a = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4846,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_54,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}

