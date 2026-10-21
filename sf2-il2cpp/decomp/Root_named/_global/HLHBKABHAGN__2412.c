// TypeDefIndex 2412
// Namespace: 
// public class HLHBKABHAGN : KJPDGEIKFAH
// Fields:

// ===== public override string IGMDDJFPIJL()  [RVA 0x33386BC]
// HLHBKABHAGN$$IGMDDJFPIJL @ RVA 0x33386BC

System_String_o * HLHBKABHAGN__IGMDDJFPIJL(HLHBKABHAGN_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_0456795b & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3042);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3043);
    FUN_01bab630(&byte___TypeInfo);
    DAT_0456795b = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3042,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3043,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== protected override void JAJNKMGCEAJ(string AOJIIDGCBEC)  [RVA 0x333876C]
// HLHBKABHAGN$$JAJNKMGCEAJ @ RVA 0x333876C

void HLHBKABHAGN__JAJNKMGCEAJ(HLHBKABHAGN_o *__this,System_String_o *AOJIIDGCBEC,MethodInfo *method)

{
  if ((DAT_0456795c & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456795c = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  NLPJLHOEAOE__IPFBEDIBGIJ(AOJIIDGCBEC,true,true,(MethodInfo *)0x0);
  return;
}


// ===== public override IEnumerable<string> DLKKPFHKIPB()  [RVA 0x33387CC]
// HLHBKABHAGN$$DLKKPFHKIPB @ RVA 0x33387CC

System_Collections_Generic_IEnumerable_string__o *
HLHBKABHAGN__DLKKPFHKIPB(HLHBKABHAGN_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_0456795d & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3044);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3045);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_0456795d = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3044,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3045,(MethodInfo *)0x0);
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


// ===== public void .ctor()  [RVA 0x333893C]
// HLHBKABHAGN$$.ctor @ RVA 0x333893C

void HLHBKABHAGN___ctor(HLHBKABHAGN_o *__this,MethodInfo *method)

{
  KJPDGEIKFAH___ctor((KJPDGEIKFAH_o *)__this,(MethodInfo *)0x0);
  return;
}

