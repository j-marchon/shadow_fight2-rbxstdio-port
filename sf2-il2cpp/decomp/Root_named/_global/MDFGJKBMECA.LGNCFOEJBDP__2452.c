// TypeDefIndex 2452
// Namespace: 
// public class ModelLoader.LGNCFOEJBDP
// Fields:
//   private const string ACKNABCNAAK = "ChildNode";
//   private const string FMJHHLMMPNK = "LCC";
//   private List<string> AFFPHLIMPKL; // 0x10
//   private List<string> PHDJNAEEIKK; // 0x18

// ===== private void GMIOEDHLEIM(int GCMHMONNHII)  [RVA 0x336B028]
// ModelLoader.LGNCFOEJBDP$$GMIOEDHLEIM @ RVA 0x336B028

void ModelLoader_LGNCFOEJBDP__GMIOEDHLEIM
               (ModelLoader_LGNCFOEJBDP_o *__this,int32_t GCMHMONNHII,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  System_String_o *pSVar4;
  System_String_array *pSVar5;
  System_Collections_Generic_List_string__o *pSVar6;
  int iVar7;
  int local_58;
  int local_54;
  
  if ((DAT_04567adf & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&StringLiteral_22448/*"{0}{1}"*/);
    FUN_01bab630(&StringLiteral_8294/*"LCC"*/);
    FUN_01bab630(&StringLiteral_4333/*"ChildNode"*/);
    DAT_04567adf = 1;
  }
  pSVar6 = (__this->fields).AFFPHLIMPKL;
  if (pSVar6 != (System_Collections_Generic_List_string__o *)0x0) {
    iVar7 = (pSVar6->fields)._size;
    if (GCMHMONNHII < iVar7) {
      return;
    }
    local_54 = iVar7;
    pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_54);
    pSVar4 = System_String__Format(StringLiteral_22448/*"{0}{1}"*/,StringLiteral_4333/*"ChildNode"*/,pIVar3,(MethodInfo *)0x0);
    do {
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      pSVar5 = (pSVar6->fields)._items;
      (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
      if (pSVar5 == (System_String_array *)0x0) break;
      uVar1 = (pSVar6->fields)._size;
      if (uVar1 < (uint)pSVar5->max_length) {
        (pSVar6->fields)._size = uVar1 + 1;
        pSVar5->m_Items[(int)uVar1] = pSVar4;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar4,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      pSVar6 = (__this->fields).PHDJNAEEIKK;
      local_58 = iVar7;
      pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_58);
      pSVar4 = System_String__Format
                         (StringLiteral_22448/*"{0}{1}"*/,StringLiteral_8294/*"LCC"*/,pIVar3,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      if (pSVar6 == (System_Collections_Generic_List_string__o *)0x0) break;
      pSVar5 = (pSVar6->fields)._items;
      (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
      if (pSVar5 == (System_String_array *)0x0) break;
      uVar1 = (pSVar6->fields)._size;
      if (uVar1 < (uint)pSVar5->max_length) {
        (pSVar6->fields)._size = uVar1 + 1;
        pSVar5->m_Items[(int)uVar1] = pSVar4;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar4,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      iVar7 = iVar7 + 1;
      if (GCMHMONNHII < iVar7) {
        return;
      }
      pSVar6 = (__this->fields).AFFPHLIMPKL;
      local_54 = iVar7;
      pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_54);
      pSVar4 = System_String__Format
                         (StringLiteral_22448/*"{0}{1}"*/,StringLiteral_4333/*"ChildNode"*/,pIVar3,(MethodInfo *)0x0);
    } while (pSVar6 != (System_Collections_Generic_List_string__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string INOFPDCPHNG(int GCMHMONNHII)  [RVA 0x336A70C]
// ModelLoader.LGNCFOEJBDP$$INOFPDCPHNG @ RVA 0x336A70C

System_String_o *
ModelLoader_LGNCFOEJBDP__INOFPDCPHNG
          (ModelLoader_LGNCFOEJBDP_o *__this,int32_t GCMHMONNHII,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar1;
  
  if ((DAT_04567ae0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_04567ae0 = 1;
  }
  __this_00 = (__this->fields).PHDJNAEEIKK;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    if ((__this_00->fields)._size <= GCMHMONNHII) {
      ModelLoader_LGNCFOEJBDP__GMIOEDHLEIM(__this,GCMHMONNHII,method);
      __this_00 = (__this->fields).PHDJNAEEIKK;
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_0346a78c;
    }
    pSVar1 = (System_String_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,GCMHMONNHII,
                        Method_System_Collections_Generic_List<string>_get_Item__);
    return pSVar1;
  }
LAB_0346a78c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3368D24]
// ModelLoader.LGNCFOEJBDP$$.ctor @ RVA 0x3368D24

void ModelLoader_LGNCFOEJBDP___ctor(ModelLoader_LGNCFOEJBDP_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  System_Collections_Generic_List_string__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567ae1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04567ae1 = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<string>__ctor__);
  (__this->fields).AFFPHLIMPKL = pSVar1;
  thunk_FUN_01c20e04(&__this->fields,pSVar1);
  pSVar1 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar2 = &(__this->fields).PHDJNAEEIKK;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string PPOILNKHDCK(int GCMHMONNHII)  [RVA 0x336A688]
// ModelLoader.LGNCFOEJBDP$$PPOILNKHDCK @ RVA 0x336A688

System_String_o *
ModelLoader_LGNCFOEJBDP__PPOILNKHDCK
          (ModelLoader_LGNCFOEJBDP_o *__this,int32_t GCMHMONNHII,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar1;
  
  if ((DAT_04567ae2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_04567ae2 = 1;
  }
  __this_00 = (__this->fields).AFFPHLIMPKL;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    if ((__this_00->fields)._size <= GCMHMONNHII) {
      ModelLoader_LGNCFOEJBDP__GMIOEDHLEIM(__this,GCMHMONNHII,method);
      __this_00 = (__this->fields).AFFPHLIMPKL;
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_0346a708;
    }
    pSVar1 = (System_String_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,GCMHMONNHII,
                        Method_System_Collections_Generic_List<string>_get_Item__);
    return pSVar1;
  }
LAB_0346a708:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

