// LFOMNKEACBL$$.cctor @ RVA 0x30FBB28

void LFOMNKEACBL___cctor(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_List_string__o *__this;
  System_String_array *pSVar4;
  
  if ((DAT_0456649c & 1) == 0) {
                    /* try { // try from 031fbb54 to 032fbc73 has its CatchHandler @ 031fbb54
                       catch() { ... } // from try @ 031fbb54 with catch @ 031fbb54
                       catch() { ... } // from try @ 031fbc98 with catch @ 031fbb54
                       catch() { ... } // from try @ 031fbdb0 with catch @ 031fbb54
                       catch() { ... } // from try @ 031fbddc with catch @ 031fbb54
                       catch() { ... } // from try @ 031fbe1c with catch @ 031fbb54 */
    FUN_01bab630(&LFOMNKEACBL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&StringLiteral_8782);
    FUN_01bab630(&StringLiteral_8781);
    FUN_01bab630(&StringLiteral_8783);
    FUN_01bab630(&StringLiteral_8784);
    DAT_0456649c = 1;
  }
  __this = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<string>__ctor__);
  pSVar3 = StringLiteral_8784;
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    pSVar4 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pSVar4 != (System_String_array *)0x0) {
      uVar1 = (__this->fields)._size;
      if (uVar1 < (uint)pSVar4->max_length) {
        (__this->fields)._size = uVar1 + 1;
        pSVar4->m_Items[(int)uVar1] = pSVar3;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar3,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      pSVar3 = StringLiteral_8781;
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      pSVar4 = (__this->fields)._items;
      (__this->fields)._version = (__this->fields)._version + 1;
      if (pSVar4 != (System_String_array *)0x0) {
        uVar1 = (__this->fields)._size;
        if (uVar1 < (uint)pSVar4->max_length) {
                    /* try { // try from 031fbc74 to 032fbc7b has its CatchHandler @ 031fbdc0 */
          (__this->fields)._size = uVar1 + 1;
          pSVar4->m_Items[(int)uVar1] = pSVar3;
          thunk_FUN_01c20e04();
        }
        else {
                    /* try { // try from 031fbc94 to 032fbc97 has its CatchHandler @ 031fbdbc */
                    /* try { // try from 031fbc98 to 032fbda7 has its CatchHandler @ 031fbb54 */
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar3,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        pSVar3 = StringLiteral_8783;
        lVar2 = Method_System_Collections_Generic_List<string>_Add__;
        pSVar4 = (__this->fields)._items;
        (__this->fields)._version = (__this->fields)._version + 1;
        if (pSVar4 != (System_String_array *)0x0) {
          uVar1 = (__this->fields)._size;
          if (uVar1 < (uint)pSVar4->max_length) {
            (__this->fields)._size = uVar1 + 1;
            pSVar4->m_Items[(int)uVar1] = pSVar3;
            thunk_FUN_01c20e04();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar3,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          pSVar3 = StringLiteral_8782;
          lVar2 = Method_System_Collections_Generic_List<string>_Add__;
          pSVar4 = (__this->fields)._items;
          (__this->fields)._version = (__this->fields)._version + 1;
          if (pSVar4 != (System_String_array *)0x0) {
            uVar1 = (__this->fields)._size;
            if (uVar1 < (uint)pSVar4->max_length) {
              (__this->fields)._size = uVar1 + 1;
              pSVar4->m_Items[(int)uVar1] = pSVar3;
              thunk_FUN_01c20e04();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar3,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            LFOMNKEACBL_TypeInfo->static_fields->GMKOGIBMPFO = __this;
            thunk_FUN_01c20e04(LFOMNKEACBL_TypeInfo->static_fields,__this);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

