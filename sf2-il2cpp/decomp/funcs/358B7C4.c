// EnterScreen$$Create @ RVA 0x358B7C4

EnterScreen_o * EnterScreen__Create(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *original;
  EnterScreen_o *item;
  System_Collections_Generic_List_EnterScreen__o *__this;
  EnterScreen_array *pEVar3;
  
  if ((DAT_04568d3e & 1) == 0) {
    FUN_01bab630(&EnterScreen_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<EnterScreen>_Add__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<EnterScreen>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<EnterScreen>__);
    FUN_01bab630(&StringLiteral_10406);
    DAT_04568d3e = 1;
  }
  original = UnityEngine_Resources__Load<object>
                       (StringLiteral_10406,Method_UnityEngine_Resources_Load<EnterScreen>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  item = (EnterScreen_o *)
         UnityEngine_Object__Instantiate<object>
                   (original,Method_UnityEngine_Object_Instantiate<EnterScreen>__);
  if ((EnterScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EnterScreen_TypeInfo);
  }
  lVar2 = Method_System_Collections_Generic_List<EnterScreen>_Add__;
  __this = EnterScreen_TypeInfo->static_fields->PHPCCHBPFNA;
  if (__this != (System_Collections_Generic_List_EnterScreen__o *)0x0) {
    pEVar3 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pEVar3 != (EnterScreen_array *)0x0) {
      uVar1 = (__this->fields)._size;
      if (uVar1 < (uint)pEVar3->max_length) {
        (__this->fields)._size = uVar1 + 1;
        pEVar3->m_Items[(int)uVar1] = item;
        thunk_FUN_01c20e04(pEVar3->m_Items + (int)uVar1,item);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      return item;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

