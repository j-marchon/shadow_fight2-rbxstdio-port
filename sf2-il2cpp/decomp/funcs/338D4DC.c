// AJJPCMDCAOB$$KAOMHFAJAJB @ RVA 0x338D4DC

System_Collections_Generic_List_HEOCHMFJJLH__o *
AJJPCMDCAOB__KAOMHFAJAJB(AJJPCMDCAOB_o *__this,System_String_o *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int32_t iVar5;
  SimpleJSON_JSONObject_o *__this_00;
  System_Collections_Generic_List_HEOCHMFJJLH__o *__this_01;
  System_String_o *__this_02;
  System_String_array *pSVar6;
  HEOCHMFJJLH_o *__this_03;
  SimpleJSON_JSONNode_o *JHMENEKPIBO;
  HEOCHMFJJLH_array *pHVar7;
  uint aIndex;
  float fVar8;
  
  if ((DAT_04567bf5 & 1) == 0) {
    FUN_01bab630(&HEOCHMFJJLH_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONObject_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEOCHMFJJLH>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEOCHMFJJLH>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HEOCHMFJJLH>_TypeInfo);
    DAT_04567bf5 = 1;
  }
  __this_00 = (SimpleJSON_JSONObject_o *)SimpleJSON_JSON__Parse(IMMNELPBGIF,(MethodInfo *)0x0);
  if (__this_00 != (SimpleJSON_JSONObject_o *)0x0) {
    bVar1 = (SimpleJSON_JSONObject_TypeInfo->_2).naturalAligment;
    if (bVar1 <= (__this_00->klass->_2).naturalAligment) {
      if ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)SimpleJSON_JSONObject_TypeInfo) {
        __this_00 = (SimpleJSON_JSONObject_o *)0x0;
      }
      goto LAB_0348d59c;
    }
  }
  __this_00 = (SimpleJSON_JSONObject_o *)0x0;
LAB_0348d59c:
  __this_01 = (System_Collections_Generic_List_HEOCHMFJJLH__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HEOCHMFJJLH>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<HEOCHMFJJLH>__ctor__);
  if (__this_00 == (SimpleJSON_JSONObject_o *)0x0) {
LAB_0348d71c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar4 = (*(__this_00->klass->vtable)._11_get_Count.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._11_get_Count.method);
  if (0 < iVar4) {
    aIndex = 0;
    do {
      __this_02 = SimpleJSON_JSONObject__Key(__this_00,aIndex,(MethodInfo *)0x0);
      if ((__this_02 == (System_String_o *)0x0) ||
         (pSVar6 = System_String__Split(__this_02,0x3a,0,(MethodInfo *)0x0),
         pSVar6 == (System_String_array *)0x0)) goto LAB_0348d71c;
      if ((int)pSVar6->max_length == 2) {
        __this_03 = (HEOCHMFJJLH_o *)thunk_FUN_01bda818(HEOCHMFJJLH_TypeInfo);
        HEOCHMFJJLH___ctor(__this_03,(MethodInfo *)0x0);
        if ((int)pSVar6->max_length == 0) {
LAB_0348d720:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        if (__this_03 == (HEOCHMFJJLH_o *)0x0) goto LAB_0348d71c;
        (__this_03->fields).NBFOAEAPGIO = pSVar6->m_Items[0];
        thunk_FUN_01c20e04();
        if ((uint)pSVar6->max_length < 2) goto LAB_0348d720;
        iVar5 = System_Int32__Parse(pSVar6->m_Items[1],(MethodInfo *)0x0);
        (__this_03->fields).HJHJIDOIHNL = iVar5;
        JHMENEKPIBO = (SimpleJSON_JSONNode_o *)
                      (*(__this_00->klass->vtable)._5_get_Item.methodPtr)
                                (__this_00,(ulong)aIndex,
                                 (__this_00->klass->vtable)._5_get_Item.method);
        fVar8 = OGMFFOMHGIA__GICIEKCGOHA(JHMENEKPIBO,0.0,(MethodInfo *)0x0);
        (__this_03->fields).BKCFPHNEONL = fVar8;
        lVar3 = Method_System_Collections_Generic_List<HEOCHMFJJLH>_Add__;
        if (__this_01 == (System_Collections_Generic_List_HEOCHMFJJLH__o *)0x0) goto LAB_0348d71c;
        pHVar7 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pHVar7 == (HEOCHMFJJLH_array *)0x0) goto LAB_0348d71c;
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pHVar7->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          pHVar7->m_Items[(int)uVar2] = __this_03;
          thunk_FUN_01c20e04(pHVar7->m_Items + (int)uVar2,__this_03);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,
                     (Il2CppObject *)__this_03,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
      }
      aIndex = aIndex + 1;
                    /* try { // try from 0348d6f4 to 0358d6fb has its CatchHandler @ 0348d8dc */
      iVar4 = (*(__this_00->klass->vtable)._11_get_Count.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._11_get_Count.method);
    } while ((int)aIndex < iVar4);
  }
                    /* try { // try from 0348d710 to 0358d717 has its CatchHandler @ 0348d8d4 */
  return __this_01;
}

