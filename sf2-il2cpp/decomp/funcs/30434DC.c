// PJKHAJKEHEL$$OIPAIAJGCDA @ RVA 0x30434DC

System_Collections_Generic_List_HOOAAGABMBL__o *
PJKHAJKEHEL__OIPAIAJGCDA(PJKHAJKEHEL_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  HOOAAGABMBL_o *pHVar3;
  MethodInfo *extraout_x1;
  HOOAAGABMBL_array *pHVar4;
  
                    /* try { // try from 03143504 to 0324350f has its CatchHandler @ 03143524 */
  if ((DAT_04565dbc & 1) == 0) {
                    /* try { // try from 03143510 to 0324353f has its CatchHandler @ 0314338c */
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03143504 with catch @ 03143524
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031434c8 with catch @ 03143528
                        */
    FUN_01bab630(&System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&StringLiteral_14870);
                    /* try { // try from 03143540 to 03243557 has its CatchHandler @ 03143628 */
    FUN_01bab630(&StringLiteral_12160);
    FUN_01bab630(&StringLiteral_3076);
                    /* try { // try from 03143558 to 03243617 has its CatchHandler @ 0314338c */
    FUN_01bab630(&StringLiteral_8772);
    FUN_01bab630(&StringLiteral_10823);
    FUN_01bab630(&StringLiteral_4289);
    FUN_01bab630(&StringLiteral_11017);
    FUN_01bab630(&StringLiteral_7066);
    DAT_04565dbc = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  pHVar3 = (HOOAAGABMBL_o *)
           (*(__this->klass->vtable)._4_CJPIJKJDHGI.methodPtr)
                     (__this,StringLiteral_12160,0,(__this->klass->vtable)._4_CJPIJKJDHGI.method);
  lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
  if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
    if (__this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) goto LAB_031439c4;
    pHVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pHVar4 == (HOOAAGABMBL_array *)0x0) goto LAB_031439c4;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pHVar4->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pHVar4->m_Items[(int)uVar1] = pHVar3;
      thunk_FUN_01c20e04();
                    /* try { // try from 03143618 to 03243627 has its CatchHandler @ 03143628 */
    }
    else {
                    /* catch() { ... } // from try @ 03143540 with catch @ 03143628
                       catch() { ... } // from try @ 03143618 with catch @ 03143628 */
                    /* try { // try from 0314362c to 0324362f has its CatchHandler @ 03143638 */
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pHVar3,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* try { // try from 03143630 to 0324363b has its CatchHandler @ 0314338c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0314362c with catch @ 03143638
                        */
  pHVar3 = (HOOAAGABMBL_o *)
           (*(__this->klass->vtable)._4_CJPIJKJDHGI.methodPtr)
                     (__this,StringLiteral_14870,0,(__this->klass->vtable)._4_CJPIJKJDHGI.method);
  lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
  if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
    if (__this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) goto LAB_031439c4;
    pHVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pHVar4 == (HOOAAGABMBL_array *)0x0) goto LAB_031439c4;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pHVar4->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pHVar4->m_Items[(int)uVar1] = pHVar3;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pHVar3,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  pHVar3 = (HOOAAGABMBL_o *)
           (*(__this->klass->vtable)._4_CJPIJKJDHGI.methodPtr)
                     (__this,StringLiteral_11017,0,(__this->klass->vtable)._4_CJPIJKJDHGI.method);
  lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
  if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
    if (__this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) goto LAB_031439c4;
    pHVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pHVar4 == (HOOAAGABMBL_array *)0x0) goto LAB_031439c4;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pHVar4->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pHVar4->m_Items[(int)uVar1] = pHVar3;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pHVar3,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  pHVar3 = (HOOAAGABMBL_o *)
           (*(__this->klass->vtable)._4_CJPIJKJDHGI.methodPtr)
                     (__this,StringLiteral_8772,0,(__this->klass->vtable)._4_CJPIJKJDHGI.method);
  lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
  if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
    if (__this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) goto LAB_031439c4;
    pHVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pHVar4 == (HOOAAGABMBL_array *)0x0) goto LAB_031439c4;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pHVar4->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pHVar4->m_Items[(int)uVar1] = pHVar3;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pHVar3,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  pHVar3 = (HOOAAGABMBL_o *)
           (*(__this->klass->vtable)._4_CJPIJKJDHGI.methodPtr)
                     (__this,StringLiteral_10823,0,(__this->klass->vtable)._4_CJPIJKJDHGI.method);
  lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
  if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
    if (__this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) goto LAB_031439c4;
    pHVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pHVar4 == (HOOAAGABMBL_array *)0x0) goto LAB_031439c4;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pHVar4->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pHVar4->m_Items[(int)uVar1] = pHVar3;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pHVar3,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  pHVar3 = (HOOAAGABMBL_o *)
           (*(__this->klass->vtable)._4_CJPIJKJDHGI.methodPtr)
                     (__this,StringLiteral_3076,0,(__this->klass->vtable)._4_CJPIJKJDHGI.method);
  lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
  if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
    if (__this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) goto LAB_031439c4;
    pHVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pHVar4 == (HOOAAGABMBL_array *)0x0) goto LAB_031439c4;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pHVar4->max_length) {
                    /* try { // try from 03143888 to 032438ff has its CatchHandler @ 03143888
                       catch() { ... } // from try @ 03143888 with catch @ 03143888
                       catch() { ... } // from try @ 03143948 with catch @ 03143888
                       catch() { ... } // from try @ 03143984 with catch @ 03143888
                       catch() { ... } // from try @ 031439c8 with catch @ 03143888 */
      (__this_00->fields)._size = uVar1 + 1;
      pHVar4->m_Items[(int)uVar1] = pHVar3;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pHVar3,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  pHVar3 = (HOOAAGABMBL_o *)
           (*(__this->klass->vtable)._4_CJPIJKJDHGI.methodPtr)
                     (__this,StringLiteral_7066,0,(__this->klass->vtable)._4_CJPIJKJDHGI.method);
  lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
  if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
    if (__this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) goto LAB_031439c4;
    pHVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pHVar4 == (HOOAAGABMBL_array *)0x0) goto LAB_031439c4;
    uVar1 = (__this_00->fields)._size;
                    /* try { // try from 03143900 to 0324391f has its CatchHandler @ 03143984 */
    if (uVar1 < (uint)pHVar4->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pHVar4->m_Items[(int)uVar1] = pHVar3;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pHVar3,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* try { // try from 0314393c to 03243947 has its CatchHandler @ 03143988 */
                    /* try { // try from 03143948 to 0324397f has its CatchHandler @ 03143888 */
  pHVar3 = (HOOAAGABMBL_o *)
           (*(__this->klass->vtable)._4_CJPIJKJDHGI.methodPtr)
                     (__this,StringLiteral_4289,0,(__this->klass->vtable)._4_CJPIJKJDHGI.method);
  lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
  if (pHVar3 == (HOOAAGABMBL_o *)0x0) {
                    /* catch() { ... } // from try @ 031439a0 with catch @ 031439b0 */
                    /* try { // try from 031439bc to 032439c7 has its CatchHandler @ 031439dc */
    return __this_00;
  }
  if (__this_00 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    pHVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pHVar4 != (HOOAAGABMBL_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
                    /* try { // try from 03143980 to 03243983 has its CatchHandler @ 03143988 */
      if (uVar1 < (uint)pHVar4->max_length) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03143900 with catch @ 03143984
                       try { // try from 03143984 to 0324399f has its CatchHandler @ 03143888 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314393c with catch @ 03143988
                       catch(type#1 @ 03f99f68) { ... } // from try @ 03143980 with catch @ 03143988
                        */
        (__this_00->fields)._size = uVar1 + 1;
        pHVar4->m_Items[(int)uVar1] = pHVar3;
        thunk_FUN_01c20e04();
        return __this_00;
      }
                    /* try { // try from 031439a0 to 032439a3 has its CatchHandler @ 031439b0 */
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pHVar3,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return __this_00;
    }
  }
LAB_031439c4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

