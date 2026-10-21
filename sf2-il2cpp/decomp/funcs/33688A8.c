// MDFGJKBMECA$$.cctor @ RVA 0x33688A8

void MDFGJKBMECA___cctor(MethodInfo *method)

{
  uint uVar1;
  System_ValueTuple_object__float__o item;
  System_ValueTuple_object__float__o item_00;
  System_ValueTuple_object__float__o item_01;
  System_ValueTuple_object__float__o item_02;
  long lVar2;
  MDFGJKBMECA_OJOAPHBHAFL_o *__this;
  MDFGJKBMECA_LGNCFOEJBDP_o *__this_00;
  MDFGJKBMECA_LGNCFOEJBDP_o **ppMVar3;
  System_Collections_Generic_List_ValueTuple_string__float___o *__this_01;
  System_Collections_Generic_List_ValueTuple_string__float___o **ppSVar4;
  MethodInfo_269A940 *in_x3;
  System_ValueTuple_string__float__array *pSVar5;
  undefined1 auVar6 [16];
  System_ValueTuple_object__float__o __this_02;
  System_ValueTuple_object__float__o __this_03;
  System_ValueTuple_object__float__o __this_04;
  System_ValueTuple_object__float__o __this_05;
  Il2CppObject local_90;
  Il2CppObject local_80;
  Il2CppObject local_70;
  Il2CppObject local_60;
  
  if ((DAT_04567ad1 & 1) == 0) {
    FUN_01bab630(&MDFGJKBMECA_LGNCFOEJBDP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ValueTuple<string,_float>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ValueTuple<string,_float>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ValueTuple<string,_float>>_TypeInfo);
    FUN_01bab630(&MDFGJKBMECA_TypeInfo);
    FUN_01bab630(&MDFGJKBMECA_OJOAPHBHAFL_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&Method_System_ValueTuple<string,_float>__ctor__);
    FUN_01bab630(&StringLiteral_21065);
    FUN_01bab630(&StringLiteral_19633);
    FUN_01bab630(&StringLiteral_19634);
    DAT_04567ad1 = 1;
  }
  auVar6 = thunk_FUN_01bda818(MDFGJKBMECA_OJOAPHBHAFL_TypeInfo);
  __this = auVar6._0_8_;
  MDFGJKBMECA_OJOAPHBHAFL___ctor(__this,auVar6._8_8_);
  MDFGJKBMECA_TypeInfo->static_fields->FGJCGBEGDOC = __this;
  thunk_FUN_01c20e04(MDFGJKBMECA_TypeInfo->static_fields,__this);
  auVar6 = thunk_FUN_01bda818(MDFGJKBMECA_LGNCFOEJBDP_TypeInfo);
  __this_00 = auVar6._0_8_;
  MDFGJKBMECA_LGNCFOEJBDP___ctor(__this_00,auVar6._8_8_);
  ppMVar3 = &MDFGJKBMECA_TypeInfo->static_fields->OLLGKNHHHFJ;
  *ppMVar3 = __this_00;
  thunk_FUN_01c20e04(ppMVar3,__this_00);
  __this_01 = (System_Collections_Generic_List_ValueTuple_string__float___o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ValueTuple<string,_float>>_TypeInfo
                                );
  System_Collections_Generic_List<ValueTuple<object,_float>>___ctor
            ((System_Collections_Generic_List_T__o *)__this_01,
             Method_System_Collections_Generic_List<ValueTuple<string,_float>>__ctor__);
  local_60.klass = (Il2CppClass *)0x0;
  local_60.monitor = (void *)0x0;
  __this_02.fields._8_8_ = StringLiteral_19634;
  __this_02.fields.Item1 = &local_60;
  System_ValueTuple<object,_float>___ctor
            (__this_02,Method_System_ValueTuple<string,_float>__ctor__,500.0,
             (MethodInfo_2BD1410 *)in_x3);
  lVar2 = Method_System_Collections_Generic_List<ValueTuple<string,_float>>_Add__;
  if (__this_01 != (System_Collections_Generic_List_ValueTuple_string__float___o *)0x0) {
    item_02.fields._8_8_ = local_60.monitor;
    item_02.fields.Item1 = (Il2CppObject *)local_60.klass;
    pSVar5 = (__this_01->fields)._items;
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    if (pSVar5 != (System_ValueTuple_string__float__array *)0x0) {
      uVar1 = (__this_01->fields)._size;
      if (uVar1 < (uint)pSVar5->max_length) {
        (__this_01->fields)._size = uVar1 + 1;
        pSVar5->m_Items[(int)uVar1].fields.Item1 = (System_String_o *)local_60.klass;
        *(void **)&pSVar5->m_Items[(int)uVar1].fields.Item2 = local_60.monitor;
        thunk_FUN_01c20e04(pSVar5->m_Items + (int)uVar1,0);
      }
      else {
        in_x3 = *(MethodInfo_269A940 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
        System_Collections_Generic_List<ValueTuple<object,_float>>__AddWithResize
                  ((System_Collections_Generic_List_T__o *)__this_01,item_02,in_x3);
      }
      local_70.klass = (Il2CppClass *)0x0;
      local_70.monitor = (void *)0x0;
      __this_03.fields._8_8_ = StringLiteral_19633;
      __this_03.fields.Item1 = &local_70;
      System_ValueTuple<object,_float>___ctor
                (__this_03,Method_System_ValueTuple<string,_float>__ctor__,65.0,
                 (MethodInfo_2BD1410 *)in_x3);
      lVar2 = Method_System_Collections_Generic_List<ValueTuple<string,_float>>_Add__;
      item_01.fields._8_8_ = local_70.monitor;
      item_01.fields.Item1 = (Il2CppObject *)local_70.klass;
      pSVar5 = (__this_01->fields)._items;
      (__this_01->fields)._version = (__this_01->fields)._version + 1;
      if (pSVar5 != (System_ValueTuple_string__float__array *)0x0) {
        uVar1 = (__this_01->fields)._size;
        if (uVar1 < (uint)pSVar5->max_length) {
          (__this_01->fields)._size = uVar1 + 1;
          pSVar5->m_Items[(int)uVar1].fields.Item1 = (System_String_o *)local_70.klass;
          *(void **)&pSVar5->m_Items[(int)uVar1].fields.Item2 = local_70.monitor;
          thunk_FUN_01c20e04(pSVar5->m_Items + (int)uVar1,0);
        }
        else {
          in_x3 = *(MethodInfo_269A940 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<ValueTuple<object,_float>>__AddWithResize
                    ((System_Collections_Generic_List_T__o *)__this_01,item_01,in_x3);
        }
        local_80.klass = (Il2CppClass *)0x0;
        local_80.monitor = (void *)0x0;
        __this_04.fields._8_8_ = StringLiteral_21065;
        __this_04.fields.Item1 = &local_80;
        System_ValueTuple<object,_float>___ctor
                  (__this_04,Method_System_ValueTuple<string,_float>__ctor__,16.0,
                   (MethodInfo_2BD1410 *)in_x3);
        lVar2 = Method_System_Collections_Generic_List<ValueTuple<string,_float>>_Add__;
        item_00.fields._8_8_ = local_80.monitor;
        item_00.fields.Item1 = (Il2CppObject *)local_80.klass;
        pSVar5 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pSVar5 != (System_ValueTuple_string__float__array *)0x0) {
          uVar1 = (__this_01->fields)._size;
          if (uVar1 < (uint)pSVar5->max_length) {
            (__this_01->fields)._size = uVar1 + 1;
            pSVar5->m_Items[(int)uVar1].fields.Item1 = (System_String_o *)local_80.klass;
            *(void **)&pSVar5->m_Items[(int)uVar1].fields.Item2 = local_80.monitor;
            thunk_FUN_01c20e04(pSVar5->m_Items + (int)uVar1,0);
          }
          else {
            in_x3 = *(MethodInfo_269A940 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
            System_Collections_Generic_List<ValueTuple<object,_float>>__AddWithResize
                      ((System_Collections_Generic_List_T__o *)__this_01,item_00,in_x3);
          }
          __this_05.fields._8_8_ = string_TypeInfo->static_fields->Empty;
          local_90.klass = (Il2CppClass *)0x0;
          local_90.monitor = (void *)0x0;
          __this_05.fields.Item1 = &local_90;
          System_ValueTuple<object,_float>___ctor
                    (__this_05,Method_System_ValueTuple<string,_float>__ctor__,21.0,
                     (MethodInfo_2BD1410 *)in_x3);
          lVar2 = Method_System_Collections_Generic_List<ValueTuple<string,_float>>_Add__;
          item.fields._8_8_ = local_90.monitor;
          item.fields.Item1 = (Il2CppObject *)local_90.klass;
          pSVar5 = (__this_01->fields)._items;
          (__this_01->fields)._version = (__this_01->fields)._version + 1;
          if (pSVar5 != (System_ValueTuple_string__float__array *)0x0) {
            uVar1 = (__this_01->fields)._size;
            if (uVar1 < (uint)pSVar5->max_length) {
              (__this_01->fields)._size = uVar1 + 1;
              pSVar5->m_Items[(int)uVar1].fields.Item1 = (System_String_o *)local_90.klass;
              *(void **)&pSVar5->m_Items[(int)uVar1].fields.Item2 = local_90.monitor;
              thunk_FUN_01c20e04(pSVar5->m_Items + (int)uVar1,0);
            }
            else {
              System_Collections_Generic_List<ValueTuple<object,_float>>__AddWithResize
                        ((System_Collections_Generic_List_T__o *)__this_01,item,
                         *(MethodInfo_269A940 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            ppSVar4 = &MDFGJKBMECA_TypeInfo->static_fields->GPFEMKDLJEK;
            *ppSVar4 = __this_01;
            thunk_FUN_01c20e04(ppSVar4,__this_01);
            MDFGJKBMECA_TypeInfo->static_fields->NIBBNNDGBAN = false;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

