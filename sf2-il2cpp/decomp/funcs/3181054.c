// PNHGEFAOFFE$$MOOKIMGDOMN @ RVA 0x3181054

void PNHGEFAOFFE__MOOKIMGDOMN
               (System_String_o *CJNPBEJHHLF,bool BDDIPHPHOIP,PNHGEFAOFFE_JFHHPCCHLEN_o *param_3,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_HashSet_object__o *__this;
  UnityEngine_Purchasing_ProductDefinition_o *__this_00;
  UnityEngine_Purchasing_ProductDefinition_array *pUVar4;
  System_Collections_Generic_List_ProductDefinition__o *__this_01;
  
  if ((DAT_045669c2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ProductDefinition>_Add__);
    FUN_01bab630(&UnityEngine_Purchasing_ProductDefinition_TypeInfo);
    DAT_045669c2 = 1;
  }
  bVar3 = PCOEHCPGBBG__EDHHJAMCOJH(CJNPBEJHHLF,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  __this = (System_Collections_Generic_HashSet_object__o *)(param_3->fields).productIDs;
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar3 = System_Collections_Generic_HashSet<object>__Add
                      (__this,(Il2CppObject *)CJNPBEJHHLF,
                       Method_System_Collections_Generic_HashSet<string>_Add__);
    if (!bVar3) {
      return;
    }
    __this_01 = (param_3->fields).products;
    __this_00 = (UnityEngine_Purchasing_ProductDefinition_o *)
                thunk_FUN_01bda818(UnityEngine_Purchasing_ProductDefinition_TypeInfo);
    UnityEngine_Purchasing_ProductDefinition___ctor
              (__this_00,CJNPBEJHHLF,~(uint)BDDIPHPHOIP & 1,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<ProductDefinition>_Add__;
    if (__this_01 != (System_Collections_Generic_List_ProductDefinition__o *)0x0) {
      pUVar4 = (__this_01->fields)._items;
      (__this_01->fields)._version = (__this_01->fields)._version + 1;
      if (pUVar4 != (UnityEngine_Purchasing_ProductDefinition_array *)0x0) {
        uVar1 = (__this_01->fields)._size;
        if ((uint)pUVar4->max_length <= uVar1) {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,
                     (Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return;
        }
        (__this_01->fields)._size = uVar1 + 1;
        pUVar4->m_Items[(int)uVar1] = __this_00;
        thunk_FUN_01c20e04(pUVar4->m_Items + (int)uVar1,__this_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

