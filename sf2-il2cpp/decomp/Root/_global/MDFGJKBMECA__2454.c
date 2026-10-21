// TypeDefIndex 2454
// Namespace: 
// public class MDFGJKBMECA
// Fields:
//   public static MDFGJKBMECA.OJOAPHBHAFL FGJCGBEGDOC; // 0x0
//   public static MDFGJKBMECA.LGNCFOEJBDP OLLGKNHHHFJ; // 0x8
//   private static readonly List<ValueTuple<string, float>> GPFEMKDLJEK; // 0x10
//   private static bool NIBBNNDGBAN; // 0x18

// ===== private static void NIBPLBFNCOO(BCPODJMEKMJ AAOOKAGABPJ, XmlNode AHDGNOJPPIB)  [RVA 0x3367330]
// MDFGJKBMECA$$NIBPLBFNCOO @ RVA 0x3367330

void MDFGJKBMECA__NIBPLBFNCOO
               (BCPODJMEKMJ_o *AAOOKAGABPJ,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  MethodInfo *in_x3;
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *KFAAOJOLHMC;
  
  if ((DAT_04567ace & 1) == 0) {
    FUN_01bab630(&MDFGJKBMECA_TypeInfo);
    DAT_04567ace = 1;
  }
  if (AAOOKAGABPJ != (BCPODJMEKMJ_o *)0x0) {
    if ((AAOOKAGABPJ->fields).super.JBNGADJBDHB == 1) {
      KFAAOJOLHMC = (AAOOKAGABPJ->fields).AGJPNDANDGC;
      if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      MDFGJKBMECA__LJNPDCKKONL(KFAAOJOLHMC,AHDGNOJPPIB,true,in_x3);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static bool LDALHGPNFFL(GBJGJEGPHKD BCKBBGCOMJD, XmlNode LKILNGEECIJ)  [RVA 0x3367654]
// MDFGJKBMECA$$LDALHGPNFFL @ RVA 0x3367654

/* WARNING: Removing unreachable block (ram,0x03467954) */

bool MDFGJKBMECA__LDALHGPNFFL
               (GBJGJEGPHKD_o *BCKBBGCOMJD,System_Xml_XmlNode_o *LKILNGEECIJ,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *a;
  MethodInfo *method_00;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_04567acf & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&MDFGJKBMECA_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_6380/*"Figures"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_13920/*"Triangle"*/);
    DAT_04567acf = 1;
  }
  if (((LKILNGEECIJ == (System_Xml_XmlNode_o *)0x0) ||
      (plVar3 = (long *)(*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)
                                  (LKILNGEECIJ,StringLiteral_6380/*"Figures"*/,
                                   (LKILNGEECIJ->klass->vtable)._51_get_Item.method),
      plVar3 == (long *)0x0)) ||
     (plVar3 = (long *)(**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210)),
     plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_034677a4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_034677a4:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
      if (plVar3 == (long *)0x0) {
        return true;
      }
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_034678f0;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_03467804;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_03467804:
    AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
       ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(AHDGNOJPPIB);
    }
    __this = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (__this,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
    if (pSVar5 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    a = (System_String_o *)
        (*(pSVar5->klass->vtable)._9_get_Value.methodPtr)
                  (pSVar5,(pSVar5->klass->vtable)._9_get_Value.method);
    method_00 = (MethodInfo *)0x0;
    bVar2 = System_String__op_Equality(a,StringLiteral_13920/*"Triangle"*/,(MethodInfo *)0x0);
    if (bVar2) {
      if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      MDFGJKBMECA__ALKHMIFLGHH(BCKBBGCOMJD,AHDGNOJPPIB,method_00);
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0346790c;
    }
  }
LAB_034678f0:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_0346790c:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return true;
}


// ===== private static bool ABCNILIJHCG(GBJGJEGPHKD BCKBBGCOMJD, XmlNode LKILNGEECIJ)  [RVA 0x3367CAC]
// MDFGJKBMECA$$ABCNILIJHCG @ RVA 0x3367CAC

/* WARNING: Removing unreachable block (ram,0x03467f5c) */
/* WARNING: Removing unreachable block (ram,0x03467fa0) */

bool MDFGJKBMECA__ABCNILIJHCG
               (GBJGJEGPHKD_o *BCKBBGCOMJD,System_Xml_XmlNode_o *LKILNGEECIJ,MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *PCCHGBJONLN;
  undefined8 *puVar3;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  MethodInfo *in_x3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((DAT_04567ad0 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_TypeInfo);
    FUN_01bab630(&MDFGJKBMECA_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9548/*"Nodes"*/);
    DAT_04567ad0 = 1;
  }
  if (LKILNGEECIJ != (System_Xml_XmlNode_o *)0x0) {
    plVar2 = (long *)(*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)
                               (LKILNGEECIJ,StringLiteral_9548/*"Nodes"*/,
                                (LKILNGEECIJ->klass->vtable)._51_get_Item.method);
    if (plVar2 == (long *)0x0) {
      return true;
    }
    PCCHGBJONLN = (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)
                  thunk_FUN_01bda818(
                                    System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_TypeInfo
                                    );
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)PCCHGBJONLN,
               Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>__ctor__);
    plVar2 = (long *)(**(code **)(*plVar2 + 0x208))(plVar2,*(undefined8 *)(*plVar2 + 0x210));
    if (plVar2 != (long *)0x0) {
      plVar2 = (long *)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar4 = *plVar2;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar6 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_03467e18;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,0);
LAB_03467e18:
        uVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if ((uVar5 & 1) == 0) {
          plVar2 = (long *)thunk_FUN_01bda71c(plVar2,System_IDisposable_TypeInfo);
          if (plVar2 == (long *)0x0) goto LAB_03467f50;
          lVar4 = *plVar2;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 == 0) goto LAB_03467f28;
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_03467f10;
        }
        lVar4 = *plVar2;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar6 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_03467e78;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,1);
LAB_03467e78:
        AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar3)(plVar2,puVar3[1]);
        if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
             ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(AHDGNOJPPIB);
          }
        }
        if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        MDFGJKBMECA__NDAHBJOBBFF(BCKBBGCOMJD,AHDGNOJPPIB,PCCHGBJONLN,in_x3);
      } while( true );
    }
  }
  goto LAB_03467f98;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_03467f10:
    if (*(System_IDisposable_c **)(piVar6 + -2) == System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03467f44;
    }
  }
LAB_03467f28:
  puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_IDisposable_TypeInfo,0);
LAB_03467f44:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_03467f50:
  if (BCKBBGCOMJD != (GBJGJEGPHKD_o *)0x0) {
    GBJGJEGPHKD__NKGOBNPBCDM(BCKBBGCOMJD,PCCHGBJONLN,(MethodInfo *)0x0);
    return true;
  }
LAB_03467f98:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x33688A8]
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
    FUN_01bab630(&StringLiteral_21065/*"skeleton"*/);
    FUN_01bab630(&StringLiteral_19633/*"mdl_magic_asteroid"*/);
    FUN_01bab630(&StringLiteral_19634/*"mdl_magic_bomb"*/);
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
  __this_02.fields._8_8_ = StringLiteral_19634/*"mdl_magic_bomb"*/;
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
      __this_03.fields._8_8_ = StringLiteral_19633/*"mdl_magic_asteroid"*/;
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
        __this_04.fields._8_8_ = StringLiteral_21065/*"skeleton"*/;
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


// ===== private static void NDAHBJOBBFF(GBJGJEGPHKD BCKBBGCOMJD, XmlNode AHDGNOJPPIB, List<MGNDHCBAPEN<string, float>> PCCHGBJONLN)  [RVA 0x336806C]
// MDFGJKBMECA$$NDAHBJOBBFF @ RVA 0x336806C

void MDFGJKBMECA__NDAHBJOBBFF
               (GBJGJEGPHKD_o *BCKBBGCOMJD,System_Xml_XmlNode_o *AHDGNOJPPIB,
               System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *PCCHGBJONLN,
               MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  BCPODJMEKMJ_Fields *pBVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  System_Xml_XmlAttributeCollection_o *pSVar6;
  System_Xml_XmlAttribute_o *pSVar7;
  MethodInfo *__this;
  System_String_o *a;
  System_String_o *KGLJICLJHEL;
  BCPODJMEKMJ_o *__this_00;
  System_Collections_Generic_List_BCPODJMEKMJ__o *__this_01;
  System_Collections_Generic_List_IEFEBEDLHNN__o *pSVar8;
  System_Collections_Generic_Dictionary_string__IEFEBEDLHNN__o *pSVar9;
  MethodInfo *pMVar10;
  BCPODJMEKMJ_array *pBVar11;
  IEFEBEDLHNN_array *pIVar12;
  float fVar13;
  float fVar14;
  float PIBBGDEBBJC;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar15;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_88;
  
  if ((DAT_04567ad2 & 1) == 0) {
    FUN_01bab630(&BCPODJMEKMJ_TypeInfo);
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IEFEBEDLHNN>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IEFEBEDLHNN>_ContainsKey__);
    FUN_01bab630(&IEFEBEDLHNN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCPODJMEKMJ>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Count__);
    FUN_01bab630(&MDFGJKBMECA_TypeInfo);
    FUN_01bab630(&StringLiteral_15220/*"Z"*/);
    FUN_01bab630(&StringLiteral_9544/*"Node"*/);
    FUN_01bab630(&StringLiteral_8859/*"Mass"*/);
    FUN_01bab630(&StringLiteral_11996/*"Shock"*/);
    FUN_01bab630(&StringLiteral_6492/*"Fixed"*/);
    FUN_01bab630(&StringLiteral_14806/*"Visible"*/);
    FUN_01bab630(&StringLiteral_14868/*"Weak"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_8769/*"MacroNode"*/);
    FUN_01bab630(&StringLiteral_15134/*"Y"*/);
    FUN_01bab630(&StringLiteral_15021/*"X"*/);
    FUN_01bab630(&StringLiteral_3200/*"Attenuation"*/);
    FUN_01bab630(&StringLiteral_4442/*"Cloth"*/);
    FUN_01bab630(&StringLiteral_4222/*"CenterOfMass"*/);
    FUN_01bab630(&StringLiteral_4475/*"Collisible"*/);
    DAT_04567ad2 = 1;
  }
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar6,StringLiteral_15021/*"X"*/,(MethodInfo *)0x0);
    fVar13 = EIABCPKDEBD__GICIEKCGOHA(pSVar7,0.0,(MethodInfo *)0x0);
    pSVar6 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar6,StringLiteral_15134/*"Y"*/,(MethodInfo *)0x0);
      fVar14 = EIABCPKDEBD__GICIEKCGOHA(pSVar7,0.0,(MethodInfo *)0x0);
      pSVar6 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar6,StringLiteral_15220/*"Z"*/,(MethodInfo *)0x0);
        PIBBGDEBBJC = EIABCPKDEBD__GICIEKCGOHA(pSVar7,0.0,(MethodInfo *)0x0);
        __this = (MethodInfo *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
        CNDPAJOLKFN___ctor((CNDPAJOLKFN_o *)__this,fVar13,-fVar14,PIBBGDEBBJC,(MethodInfo *)0x0);
        pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if ((pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
           (pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar6,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0),
           pSVar7 != (System_Xml_XmlAttribute_o *)0x0)) {
          a = (System_String_o *)
              (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                        (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method);
          KGLJICLJHEL = (System_String_o *)
                        (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                                  (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
          bVar4 = System_String__op_Equality(a,StringLiteral_4222/*"CenterOfMass"*/,(MethodInfo *)0x0);
          bVar5 = System_String__op_Equality(a,StringLiteral_9544/*"Node"*/,(MethodInfo *)0x0);
          if ((bVar4) || (bVar5)) {
            __this_00 = (BCPODJMEKMJ_o *)thunk_FUN_01bda818(IEFEBEDLHNN_TypeInfo);
            pMVar10 = (MethodInfo *)0x0;
            IEFEBEDLHNN___ctor((IEFEBEDLHNN_o *)__this_00,KGLJICLJHEL,(CNDPAJOLKFN_o *)__this,
                               (MethodInfo *)0x0);
            pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_034688a4;
            pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar6,StringLiteral_4442/*"Cloth"*/,(MethodInfo *)0x0);
            bVar5 = EIABCPKDEBD__FMBMNDIGLIG(pSVar7,false,(MethodInfo *)0x0);
            if (__this_00 == (BCPODJMEKMJ_o *)0x0) goto LAB_034688a4;
            IEFEBEDLHNN__GJCKOEMLFJP((IEFEBEDLHNN_o *)__this_00,bVar5,(MethodInfo *)0x0);
            (__this_00->fields).super._FFLODIDGPIO_k__BackingField =
                 (__this_00->fields).super.BEGOLMJFLCG;
            pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_034688a4;
            pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar6,StringLiteral_3200/*"Attenuation"*/,(MethodInfo *)0x0);
            fVar13 = EIABCPKDEBD__GICIEKCGOHA(pSVar7,0.0,(MethodInfo *)0x0);
            (__this_00->fields).super._EICKLJKAEAI_k__BackingField = fVar13;
            (__this_00->fields).super.DDMMFMCNPON = fVar13;
            if (bVar4) {
              if (PCCHGBJONLN ==
                  (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)0x0)
              goto LAB_034688a4;
              length = (PCCHGBJONLN->fields)._size;
              (PCCHGBJONLN->fields)._size = 0;
              (PCCHGBJONLN->fields)._version = (PCCHGBJONLN->fields)._version + 1;
              if (0 < length) {
                pMVar10 = (MethodInfo *)0x0;
                System_Array__Clear((System_Array_o *)(PCCHGBJONLN->fields)._items,0,length,
                                    (MethodInfo *)0x0);
              }
              if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              MDFGJKBMECA__LJNPDCKKONL(PCCHGBJONLN,AHDGNOJPPIB,false,pMVar10);
            }
            if ((BCKBBGCOMJD == (GBJGJEGPHKD_o *)0x0) ||
               (pSVar8 = GBJGJEGPHKD__INDHJCEIEAE(BCKBBGCOMJD,(MethodInfo *)0x0),
               lVar3 = Method_System_Collections_Generic_List<IEFEBEDLHNN>_Add__,
               pSVar8 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) goto LAB_034688a4;
            pIVar12 = (pSVar8->fields)._items;
            (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
            if (pIVar12 == (IEFEBEDLHNN_array *)0x0) goto LAB_034688a4;
            uVar1 = (pSVar8->fields)._size;
            if (uVar1 < (uint)pIVar12->max_length) {
              (pSVar8->fields)._size = uVar1 + 1;
              pIVar12->m_Items[(int)uVar1] = (IEFEBEDLHNN_o *)__this_00;
              thunk_FUN_01c20e04(pIVar12->m_Items + (int)uVar1,__this_00);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar8,
                         (Il2CppObject *)__this_00,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
          else {
            bVar4 = System_String__op_Equality(a,StringLiteral_8769/*"MacroNode"*/,(MethodInfo *)0x0);
            if (!bVar4) {
              return;
            }
            if (__this == (MethodInfo *)0x0) goto LAB_034688a4;
            (((CNDPAJOLKFN_Fields *)&__this->invoker_method)->super).OHHDBINAJCB =
                 -(((CNDPAJOLKFN_Fields *)&__this->invoker_method)->super).OHHDBINAJCB;
            __this_00 = (BCPODJMEKMJ_o *)thunk_FUN_01bda818(BCPODJMEKMJ_TypeInfo);
            pMVar10 = __this;
            BCPODJMEKMJ___ctor(__this_00,KGLJICLJHEL,(CNDPAJOLKFN_o *)__this,(MethodInfo *)0x0);
            if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            MDFGJKBMECA__NIBPLBFNCOO(__this_00,AHDGNOJPPIB,pMVar10);
            if ((BCKBBGCOMJD == (GBJGJEGPHKD_o *)0x0) ||
               (__this_01 = GBJGJEGPHKD__MCDNKHOHEGD(BCKBBGCOMJD,(MethodInfo *)0x0),
               lVar3 = Method_System_Collections_Generic_List<BCPODJMEKMJ>_Add__,
               __this_01 == (System_Collections_Generic_List_BCPODJMEKMJ__o *)0x0))
            goto LAB_034688a4;
            pBVar11 = (__this_01->fields)._items;
            (__this_01->fields)._version = (__this_01->fields)._version + 1;
            if (pBVar11 == (BCPODJMEKMJ_array *)0x0) goto LAB_034688a4;
            uVar1 = (__this_01->fields)._size;
            if (uVar1 < (uint)pBVar11->max_length) {
              (__this_01->fields)._size = uVar1 + 1;
              pBVar11->m_Items[(int)uVar1] = __this_00;
              thunk_FUN_01c20e04(pBVar11->m_Items + (int)uVar1,__this_00);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_01,
                         (Il2CppObject *)__this_00,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
            }
            if (__this_00 == (BCPODJMEKMJ_o *)0x0) {
              return;
            }
          }
          IEFEBEDLHNN__PEBLEKIANBF
                    ((IEFEBEDLHNN_o *)__this_00,(CNDPAJOLKFN_o *)__this,(MethodInfo *)0x0);
          pSVar8 = GBJGJEGPHKD__HMAAHELNECD(BCKBBGCOMJD,(MethodInfo *)0x0);
          if (pSVar8 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
            (__this_00->fields).super.FLDBGCIKMKA = (pSVar8->fields)._size;
            pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar6,StringLiteral_8859/*"Mass"*/,(MethodInfo *)0x0);
              fVar13 = EIABCPKDEBD__GICIEKCGOHA(pSVar7,0.0,(MethodInfo *)0x0);
              IEFEBEDLHNN__BCEAICNLDID((IEFEBEDLHNN_o *)__this_00,fVar13,(MethodInfo *)0x0);
              fVar13 = IEFEBEDLHNN__NODBECJPBDC((IEFEBEDLHNN_o *)__this_00,(MethodInfo *)0x0);
              CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_88,fVar13,
                         (MethodInfo *)0x0);
              pBVar2 = &__this_00->fields;
              (pBVar2->super)._MGNABGCCFCJ_k__BackingField.fields.fakeValueActive =
                   local_88.fakeValueActive;
              (pBVar2->super)._MGNABGCCFCJ_k__BackingField.fields.inited = local_88.inited;
              *(undefined2 *)&(pBVar2->super)._MGNABGCCFCJ_k__BackingField.fields.field_0x12 =
                   local_88._18_2_;
              (__this_00->fields).super._MGNABGCCFCJ_k__BackingField.fields.hiddenValueOldByte4 =
                   (CodeStage_AntiCheat_Common_ACTkByte4_o)local_88.hiddenValueOldByte4.fields;
              (__this_00->fields).super._MGNABGCCFCJ_k__BackingField.fields.fakeValue =
                   local_88.fakeValue;
              (__this_00->fields).super._MGNABGCCFCJ_k__BackingField.fields.currentCryptoKey =
                   local_88.currentCryptoKey;
              (__this_00->fields).super._MGNABGCCFCJ_k__BackingField.fields.hiddenValue =
                   local_88.hiddenValue;
              pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar6,StringLiteral_6492/*"Fixed"*/,(MethodInfo *)0x0);
                bVar4 = EIABCPKDEBD__FMBMNDIGLIG(pSVar7,false,(MethodInfo *)0x0);
                IEFEBEDLHNN__GAMGKJCEMAJ((IEFEBEDLHNN_o *)__this_00,bVar4,(MethodInfo *)0x0);
                CVar15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
                         CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                                   ((__this_00->fields).super.MCAILHLELHB,(MethodInfo *)0x0);
                (__this_00->fields).super._GBHELIILHOM_k__BackingField.fields = CVar15;
                pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                         (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                if (pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar6,StringLiteral_14806/*"Visible"*/,(MethodInfo *)0x0);
                  bVar4 = EIABCPKDEBD__FMBMNDIGLIG(pSVar7,false,(MethodInfo *)0x0);
                  (__this_00->fields).super.ENFFPGHABFD = bVar4;
                  (__this_00->fields).super._FEONDPFFLFJ_k__BackingField = bVar4;
                  pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                     (AHDGNOJPPIB,
                                      (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                  if (pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar6,StringLiteral_11996/*"Shock"*/,(MethodInfo *)0x0);
                    bVar4 = EIABCPKDEBD__FMBMNDIGLIG(pSVar7,false,(MethodInfo *)0x0);
                    (__this_00->fields).super.FJHAMMNKBPN = bVar4;
                    pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                       (AHDGNOJPPIB,
                                        (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    if (pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                      pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar6,StringLiteral_4475/*"Collisible"*/,(MethodInfo *)0x0);
                      bVar4 = EIABCPKDEBD__FMBMNDIGLIG(pSVar7,false,(MethodInfo *)0x0);
                      (__this_00->fields).super.EMNCOJMFLLK = bVar4;
                      pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                         (AHDGNOJPPIB,
                                          (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                      if (pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                        pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                           (pSVar6,StringLiteral_14868/*"Weak"*/,(MethodInfo *)0x0);
                        bVar4 = EIABCPKDEBD__FMBMNDIGLIG(pSVar7,false,(MethodInfo *)0x0);
                        IEFEBEDLHNN__FCIDNFODLFB((IEFEBEDLHNN_o *)__this_00,bVar4,(MethodInfo *)0x0)
                        ;
                        pSVar8 = GBJGJEGPHKD__HMAAHELNECD(BCKBBGCOMJD,(MethodInfo *)0x0);
                        lVar3 = Method_System_Collections_Generic_List<IEFEBEDLHNN>_Add__;
                        if (pSVar8 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
                          pIVar12 = (pSVar8->fields)._items;
                          (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
                          if (pIVar12 != (IEFEBEDLHNN_array *)0x0) {
                            uVar1 = (pSVar8->fields)._size;
                            if (uVar1 < (uint)pIVar12->max_length) {
                              (pSVar8->fields)._size = uVar1 + 1;
                              pIVar12->m_Items[(int)uVar1] = (IEFEBEDLHNN_o *)__this_00;
                              thunk_FUN_01c20e04(pIVar12->m_Items + (int)uVar1,__this_00);
                            }
                            else {
                              System_Collections_Generic_List<object>__AddWithResize
                                        ((System_Collections_Generic_List_object__o *)pSVar8,
                                         (Il2CppObject *)__this_00,
                                         *(MethodInfo_26E4DAC **)
                                          (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                            }
                            pSVar9 = GBJGJEGPHKD__FDCEPFOKGKL(BCKBBGCOMJD,(MethodInfo *)0x0);
                            if (pSVar9 != (System_Collections_Generic_Dictionary_string__IEFEBEDLHNN__o
                                           *)0x0) {
                              bVar4 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                                                ((System_Collections_Generic_Dictionary_object__object__o
                                                  *)pSVar9,
                                                 (Il2CppObject *)
                                                 (__this_00->fields).super.NPFMOEOIEKM,
                                                 Method_System_Collections_Generic_Dictionary<string,_IEFEBEDLHNN>_ContainsKey__
                                                );
                              if (!bVar4) {
                                pSVar9 = GBJGJEGPHKD__FDCEPFOKGKL(BCKBBGCOMJD,(MethodInfo *)0x0);
                                if (pSVar9 == (System_Collections_Generic_Dictionary_string__IEFEBEDLHNN__o
                                               *)0x0) goto LAB_034688a4;
                                System_Collections_Generic_Dictionary<object,_object>__Add
                                          ((System_Collections_Generic_Dictionary_object__object__o
                                            *)pSVar9,
                                           (Il2CppObject *)(__this_00->fields).super.NPFMOEOIEKM,
                                           (Il2CppObject *)__this_00,
                                           Method_System_Collections_Generic_Dictionary<string,_IEFEBEDLHNN>_Add__
                                          );
                              }
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_034688a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void NEECEMHBMEB(GBJGJEGPHKD BCKBBGCOMJD)  [RVA 0x3368DD0]
// MDFGJKBMECA$$NEECEMHBMEB @ RVA 0x3368DD0

void MDFGJKBMECA__NEECEMHBMEB(GBJGJEGPHKD_o *BCKBBGCOMJD,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this;
  System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *__this_00;
  Il2CppObject *pIVar3;
  Il2CppClass *pIVar4;
  char **ppcVar5;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04567ad3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<int,_int>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<int,_int>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<int,_int>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
    DAT_04567ad3 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if (BCKBBGCOMJD != (GBJGJEGPHKD_o *)0x0) {
    __this = GBJGJEGPHKD__HMAAHELNECD(BCKBBGCOMJD,(MethodInfo *)0x0);
    __this_00 = GBJGJEGPHKD__JNAHGJHEIOE(BCKBBGCOMJD,(MethodInfo *)0x0);
    if (__this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_60,
                           Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<int,_int>>_MoveNext__
                          );
        pIVar1 = local_60.fields._current;
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_60,
                     Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<int,_int>>_Dispose__
                    );
          return;
        }
        if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (__this == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this,
                            *(int32_t *)&local_60.fields._current[1].klass,
                            Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
        pIVar4 = (Il2CppClass *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this,
                            *(int32_t *)((long)&pIVar1[1].klass + 4),
                            Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
        if (pIVar3 == (Il2CppObject *)0x0) break;
        pIVar3[1].klass = pIVar4;
        thunk_FUN_01c20e04(pIVar3 + 1,pIVar4);
        if (pIVar4 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        ppcVar5 = &(pIVar4->_1).name;
        *ppcVar5 = (char *)pIVar3;
        thunk_FUN_01c20e04(ppcVar5,pIVar3);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static bool OCIOEHCIKOK(GBJGJEGPHKD BCKBBGCOMJD, XmlNode LKILNGEECIJ)  [RVA 0x3368FCC]
// MDFGJKBMECA$$OCIOEHCIKOK @ RVA 0x3368FCC

/* WARNING: Removing unreachable block (ram,0x034692cc) */

bool MDFGJKBMECA__OCIOEHCIKOK
               (GBJGJEGPHKD_o *BCKBBGCOMJD,System_Xml_XmlNode_o *LKILNGEECIJ,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *a;
  MethodInfo *method_00;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_04567ad4 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&MDFGJKBMECA_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_4190/*"Capsule"*/);
    FUN_01bab630(&StringLiteral_6380/*"Figures"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    DAT_04567ad4 = 1;
  }
  if (((LKILNGEECIJ == (System_Xml_XmlNode_o *)0x0) ||
      (plVar3 = (long *)(*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)
                                  (LKILNGEECIJ,StringLiteral_6380/*"Figures"*/,
                                   (LKILNGEECIJ->klass->vtable)._51_get_Item.method),
      plVar3 == (long *)0x0)) ||
     (plVar3 = (long *)(**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210)),
     plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0346911c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_0346911c:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
      if (plVar3 == (long *)0x0) {
        return true;
      }
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_03469268;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0346917c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_0346917c:
    AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
       ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(AHDGNOJPPIB);
    }
    __this = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (__this,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
    if (pSVar5 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    a = (System_String_o *)
        (*(pSVar5->klass->vtable)._9_get_Value.methodPtr)
                  (pSVar5,(pSVar5->klass->vtable)._9_get_Value.method);
    method_00 = (MethodInfo *)0x0;
    bVar2 = System_String__op_Equality(a,StringLiteral_4190/*"Capsule"*/,(MethodInfo *)0x0);
    if (bVar2) {
      if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      MDFGJKBMECA__JCEKHIOODBO(BCKBBGCOMJD,AHDGNOJPPIB,method_00);
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_03469284;
    }
  }
LAB_03469268:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_03469284:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return true;
}


// ===== public void .ctor()  [RVA 0x336956C]
// MDFGJKBMECA$$.ctor @ RVA 0x336956C

void MDFGJKBMECA___ctor(MDFGJKBMECA_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void JCEKHIOODBO(GBJGJEGPHKD BCKBBGCOMJD, XmlNode AHDGNOJPPIB)  [RVA 0x33693AC]
// MDFGJKBMECA$$JCEKHIOODBO @ RVA 0x33693AC

void MDFGJKBMECA__JCEKHIOODBO
               (GBJGJEGPHKD_o *BCKBBGCOMJD,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *KGLJICLJHEL;
  GEBHIBIEAJE_o *AEAMAIHIFKL;
  JGHEMMGMLND_o *__this_00;
  Nekki_SF2_Core_Fights_Renders_Model_ModelCapsuleRendererHolder_o *pNVar4;
  UnityEngine_Transform_o *NCKFIGCBCPO;
  Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_o *__this_01;
  System_Collections_Generic_List_JGHEMMGMLND__o *__this_02;
  OLKKAIFGGAK_o *pOVar5;
  JGHEMMGMLND_array *pJVar6;
  
  if ((DAT_04567ad5 & 1) == 0) {
    FUN_01bab630(&JGHEMMGMLND_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JGHEMMGMLND>_Add__);
    FUN_01bab630(&StringLiteral_5627/*"Edge"*/);
    DAT_04567ad5 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if ((__this != (System_Xml_XmlAttributeCollection_o *)0x0) &&
       (pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (__this,StringLiteral_5627/*"Edge"*/,(MethodInfo *)0x0),
       pSVar3 != (System_Xml_XmlAttribute_o *)0x0)) {
      KGLJICLJHEL = (System_String_o *)
                    (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                              (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
      if (BCKBBGCOMJD != (GBJGJEGPHKD_o *)0x0) {
        AEAMAIHIFKL = GBJGJEGPHKD__MOEFLHJOFIC(BCKBBGCOMJD,KGLJICLJHEL,(MethodInfo *)0x0);
        if (AEAMAIHIFKL == (GEBHIBIEAJE_o *)0x0) {
          return;
        }
        __this_00 = (JGHEMMGMLND_o *)thunk_FUN_01bda818(JGHEMMGMLND_TypeInfo);
        JGHEMMGMLND___ctor(__this_00,AHDGNOJPPIB,AEAMAIHIFKL,(MethodInfo *)0x0);
        pOVar5 = (BCKBBGCOMJD->fields).KOHECBJAFKG;
        if ((((pOVar5 != (OLKKAIFGGAK_o *)0x0) &&
             (pNVar4 = (pOVar5->fields).HJFIJBGFECC,
             pNVar4 != (Nekki_SF2_Core_Fights_Renders_Model_ModelCapsuleRendererHolder_o *)0x0)) &&
            (NCKFIGCBCPO = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
            __this_00 != (JGHEMMGMLND_o *)0x0)) &&
           (__this_01 = JGHEMMGMLND__PMLCIOCDHDM(__this_00,NCKFIGCBCPO,(MethodInfo *)0x0),
           __this_01 != (Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_o *)0x0)) {
          Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender__Render(__this_01,(MethodInfo *)0x0);
          pOVar5 = (BCKBBGCOMJD->fields).KOHECBJAFKG;
          if ((pOVar5 != (OLKKAIFGGAK_o *)0x0) &&
             (pNVar4 = (pOVar5->fields).HJFIJBGFECC,
             pNVar4 != (Nekki_SF2_Core_Fights_Renders_Model_ModelCapsuleRendererHolder_o *)0x0)) {
            Nekki_SF2_Core_Fights_Renders_Model_ModelCapsuleRendererHolder__AddCapsuleRender
                      (pNVar4,__this_01,(MethodInfo *)0x0);
            __this_02 = GBJGJEGPHKD__CEIMMODODJC(BCKBBGCOMJD,(MethodInfo *)0x0);
            lVar2 = Method_System_Collections_Generic_List<JGHEMMGMLND>_Add__;
            if (__this_02 != (System_Collections_Generic_List_JGHEMMGMLND__o *)0x0) {
              pJVar6 = (__this_02->fields)._items;
              (__this_02->fields)._version = (__this_02->fields)._version + 1;
              if (pJVar6 != (JGHEMMGMLND_array *)0x0) {
                uVar1 = (__this_02->fields)._size;
                if (uVar1 < (uint)pJVar6->max_length) {
                  (__this_02->fields)._size = uVar1 + 1;
                  pJVar6->m_Items[(int)uVar1] = __this_00;
                  thunk_FUN_01c20e04(pJVar6->m_Items + (int)uVar1,__this_00);
                  return;
                }
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_02,
                           (Il2CppObject *)__this_00,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool KFDPGIEJLEC(string PHDDFFIECEI, ref float KGAENKKEEPK)  [RVA 0x3369574]
// MDFGJKBMECA$$KFDPGIEJLEC @ RVA 0x3369574

bool MDFGJKBMECA__KFDPGIEJLEC(System_String_o *PHDDFFIECEI,float *KGAENKKEEPK,MethodInfo *method)

{
  undefined8 uVar1;
  bool bVar2;
  System_Collections_Generic_List_ValueTuple_string__float___o *__this;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  undefined8 uStack_38;
  
  if ((DAT_04567ad6 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ValueTuple<string,_float>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ValueTuple<string,_float>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ValueTuple<string,_float>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ValueTuple<string,_float>>_GetEnumerator__)
    ;
    FUN_01bab630(&MDFGJKBMECA_TypeInfo);
    DAT_04567ad6 = 1;
  }
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  uStack_38 = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = MDFGJKBMECA_TypeInfo->static_fields->GPFEMKDLJEK;
  if (__this == (System_Collections_Generic_List_ValueTuple_string__float___o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<ValueTuple<object,_float>>__GetEnumerator
            (&local_50,(System_Collections_Generic_List_T__o *)__this,
             Method_System_Collections_Generic_List<ValueTuple<string,_float>>_GetEnumerator__);
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<ValueTuple<object,_float>>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<ValueTuple<string,_float>>_MoveNext__
                      );
    uVar1 = uStack_38;
    if (!bVar2) goto LAB_03469674;
    if (PHDDFFIECEI == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_String__Contains
                      (PHDDFFIECEI,(System_String_o *)local_50.fields._current,(MethodInfo *)0x0);
  } while (!bVar2);
  if (*KGAENKKEEPK <= (float)uVar1) {
LAB_03469674:
    bVar2 = true;
  }
  else {
    bVar2 = false;
    *KGAENKKEEPK = (float)uVar1;
  }
  System_Collections_Generic_List_Enumerator<ValueTuple<object,_float>>__Dispose
            (&local_50,
             Method_System_Collections_Generic_List_Enumerator<ValueTuple<string,_float>>_Dispose__)
  ;
  return bVar2;
}


// ===== private static bool NHFNCHCKIJJ(GBJGJEGPHKD BCKBBGCOMJD, XmlNode LKILNGEECIJ, string GAKKFJBNLFK)  [RVA 0x3369718]
// MDFGJKBMECA$$NHFNCHCKIJJ @ RVA 0x3369718

/* WARNING: Removing unreachable block (ram,0x03469b38) */

bool MDFGJKBMECA__NHFNCHCKIJJ
               (GBJGJEGPHKD_o *BCKBBGCOMJD,System_Xml_XmlNode_o *LKILNGEECIJ,
               System_String_o *GAKKFJBNLFK,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int32_t iVar4;
  long *plVar5;
  System_Collections_Generic_List_GEBHIBIEAJE__o *__this;
  System_Collections_Generic_List_GEBHIBIEAJE__o *pSVar6;
  long *plVar7;
  undefined8 *puVar8;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *str1;
  System_String_o *str0;
  System_String_o *str2;
  MethodInfo *in_x4;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int local_64;
  
  if ((DAT_04567ad7 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GEBHIBIEAJE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GEBHIBIEAJE>_set_Capacity__);
    FUN_01bab630(&MDFGJKBMECA_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_5628/*"Edges"*/);
    FUN_01bab630(&StringLiteral_8120/*"Iterations"*/);
    FUN_01bab630(&StringLiteral_3673/*"CI"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567ad7 = 1;
  }
  local_64 = 0;
  if (LKILNGEECIJ != (System_Xml_XmlNode_o *)0x0) {
    plVar5 = (long *)(*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)
                               (LKILNGEECIJ,StringLiteral_5628/*"Edges"*/,
                                (LKILNGEECIJ->klass->vtable)._51_get_Item.method);
    if (plVar5 == (long *)0x0) {
      return true;
    }
    if (BCKBBGCOMJD != (GBJGJEGPHKD_o *)0x0) {
      __this = GBJGJEGPHKD__MPGCPFKOCOB(BCKBBGCOMJD,(MethodInfo *)0x0);
      pSVar6 = GBJGJEGPHKD__MPGCPFKOCOB(BCKBBGCOMJD,(MethodInfo *)0x0);
      if (pSVar6 != (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0) {
        iVar1 = (pSVar6->fields)._size;
        plVar7 = (long *)(**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210));
        if ((plVar7 != (long *)0x0) &&
           (iVar3 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0)),
           __this != (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0)) {
          System_Collections_Generic_List<object>__set_Capacity
                    ((System_Collections_Generic_List_object__o *)__this,iVar3 + iVar1,
                     Method_System_Collections_Generic_List<GEBHIBIEAJE>_set_Capacity__);
          plVar5 = (long *)(**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210));
          if (plVar5 != (long *)0x0) {
            plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0))
            ;
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            do {
              lVar9 = *plVar5;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_034698fc;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar8 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_034698fc:
              uVar10 = (*(code *)*puVar8)(plVar5,puVar8[1]);
              if ((uVar10 & 1) == 0) {
                plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
                if (plVar5 == (long *)0x0) {
                  return true;
                }
                lVar9 = *plVar5;
                uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar10 == 0) goto LAB_03469ad0;
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                goto LAB_03469ab8;
              }
              lVar9 = *plVar5;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                    goto LAB_0346995c;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar8 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_0346995c:
              AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar8)(plVar5,puVar8[1]);
              if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              bVar2 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
              if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar2) ||
                 ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                  (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(AHDGNOJPPIB);
              }
              __this_00 = (System_Xml_XmlAttributeCollection_o *)
                          (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                    (AHDGNOJPPIB,
                                     (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
              if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                      (__this_00,StringLiteral_8120/*"Iterations"*/,(MethodInfo *)0x0);
              iVar4 = EIABCPKDEBD__EHJNCGCICMP(LBJNDMNEJJB,1,(MethodInfo *)0x0);
              str1 = (System_String_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
              local_64 = 0;
              if (0 < iVar4) {
                do {
                  str0 = System_String__Concat(StringLiteral_1/*""*/,str1,(MethodInfo *)0x0);
                  if (0 < local_64) {
                    str2 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
                    str0 = System_String__Concat(str0,StringLiteral_3673/*"CI"*/,str2,(MethodInfo *)0x0);
                  }
                  if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  MDFGJKBMECA__KJGCIFFGPPO(BCKBBGCOMJD,AHDGNOJPPIB,str0,GAKKFJBNLFK,in_x4);
                  local_64 = local_64 + 1;
                } while (local_64 < iVar4);
              }
            } while( true );
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_03469ab8:
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03469aec;
    }
  }
LAB_03469ad0:
  puVar8 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_03469aec:
  (*(code *)*puVar8)(plVar5,puVar8[1]);
  return true;
}


// ===== private static void KJGCIFFGPPO(GBJGJEGPHKD BCKBBGCOMJD, XmlNode AHDGNOJPPIB, string BCPAFBNLBDE, string GAKKFJBNLFK)  [RVA 0x3369C34]
// MDFGJKBMECA$$KJGCIFFGPPO @ RVA 0x3369C34

void MDFGJKBMECA__KJGCIFFGPPO
               (GBJGJEGPHKD_o *BCKBBGCOMJD,System_Xml_XmlNode_o *AHDGNOJPPIB,
               System_String_o *BCPAFBNLBDE,System_String_o *GAKKFJBNLFK,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  System_Xml_XmlAttributeCollection_o *pSVar6;
  System_Xml_XmlAttribute_o *pSVar7;
  System_String_o *pSVar8;
  IEFEBEDLHNN_o *CKCOLJLFJDB;
  IEFEBEDLHNN_o *BKAKFOPEOID;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  GEBHIBIEAJE_o *__this;
  System_String_o **ppSVar11;
  System_Collections_Generic_List_GEBHIBIEAJE__o *pSVar12;
  System_Object_array *args;
  long lVar13;
  undefined8 uVar14;
  MethodInfo *method_00;
  GEBHIBIEAJE_array *pGVar15;
  float CJNHFNHJHPE;
  float CJNHFNHJHPE_00;
  float CJNHFNHJHPE_01;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_118;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_100;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_e0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_c0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_a0;
  float local_74;
  
  if ((DAT_04567ad8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GEBHIBIEAJE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GEBHIBIEAJE>_Add__);
    FUN_01bab630(&MDFGJKBMECA_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_3518/*"Blood"*/);
    FUN_01bab630(&StringLiteral_8849/*"Margin2"*/);
    FUN_01bab630(&StringLiteral_9258/*"Muscle"*/);
    FUN_01bab630(&StringLiteral_10792/*"Radius"*/);
    FUN_01bab630(&StringLiteral_5266/*"Defense"*/);
    FUN_01bab630(&StringLiteral_5725/*"End2"*/);
    FUN_01bab630(&StringLiteral_11996/*"Shock"*/);
    FUN_01bab630(&StringLiteral_8392/*"Length"*/);
    FUN_01bab630(&StringLiteral_14995/*"Wring type edge: {0}"*/);
    FUN_01bab630(&StringLiteral_8848/*"Margin1"*/);
    FUN_01bab630(&StringLiteral_12509/*"SubType"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_3532/*"BodyPart"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_5724/*"End1"*/);
    FUN_01bab630(&StringLiteral_5627/*"Edge"*/);
    FUN_01bab630(&StringLiteral_4475/*"Collisible"*/);
    DAT_04567ad8 = 1;
  }
  if ((((AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) ||
       (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
       pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0)) ||
      (pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                          (pSVar6,StringLiteral_5724/*"End1"*/,(MethodInfo *)0x0),
      pSVar7 == (System_Xml_XmlAttribute_o *)0x0)) ||
     (pSVar8 = (System_String_o *)
               (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method),
     BCKBBGCOMJD == (GBJGJEGPHKD_o *)0x0)) goto LAB_0346a48c;
  CKCOLJLFJDB = GBJGJEGPHKD__HJHKDOPGJLM(BCKBBGCOMJD,pSVar8,(MethodInfo *)0x0);
  pSVar6 = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if ((pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) ||
     (pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar6,StringLiteral_5725/*"End2"*/,(MethodInfo *)0x0),
     pSVar7 == (System_Xml_XmlAttribute_o *)0x0)) goto LAB_0346a48c;
  pSVar8 = (System_String_o *)
           (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                     (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method);
  BKAKFOPEOID = GBJGJEGPHKD__HJHKDOPGJLM(BCKBBGCOMJD,pSVar8,(MethodInfo *)0x0);
  pSVar6 = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_0346a48c;
  pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar6,StringLiteral_8392/*"Length"*/,(MethodInfo *)0x0);
  CJNHFNHJHPE = EIABCPKDEBD__GICIEKCGOHA(pSVar7,0.0,(MethodInfo *)0x0);
  pSVar6 = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_0346a48c;
  pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar6,StringLiteral_10792/*"Radius"*/,(MethodInfo *)0x0);
  local_74 = EIABCPKDEBD__GICIEKCGOHA(pSVar7,0.0,(MethodInfo *)0x0);
  pSVar6 = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_0346a48c;
  pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar6,StringLiteral_8848/*"Margin1"*/,(MethodInfo *)0x0);
  CJNHFNHJHPE_00 = EIABCPKDEBD__GICIEKCGOHA(pSVar7,0.0,(MethodInfo *)0x0);
  pSVar6 = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_0346a48c;
  pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar6,StringLiteral_8849/*"Margin2"*/,(MethodInfo *)0x0);
  CJNHFNHJHPE_01 = EIABCPKDEBD__GICIEKCGOHA(pSVar7,0.0,(MethodInfo *)0x0);
  pSVar6 = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_0346a48c;
  pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar6,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
  pSVar8 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  pSVar6 = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_0346a48c;
  pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar6,StringLiteral_12509/*"SubType"*/,(MethodInfo *)0x0);
  EIABCPKDEBD__JPKEHIBGOEM(pSVar7,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  pSVar6 = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_0346a48c;
  pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar6,StringLiteral_3532/*"BodyPart"*/,(MethodInfo *)0x0);
  pSVar9 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  pSVar6 = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_0346a48c;
  pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar6,StringLiteral_5266/*"Defense"*/,(MethodInfo *)0x0);
  pSVar10 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  pSVar6 = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_0346a48c;
  pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar6,StringLiteral_4475/*"Collisible"*/,(MethodInfo *)0x0);
  bVar2 = EIABCPKDEBD__FMBMNDIGLIG(pSVar7,false,(MethodInfo *)0x0);
  pSVar6 = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_0346a48c;
  pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar6,StringLiteral_3518/*"Blood"*/,(MethodInfo *)0x0);
  bVar3 = EIABCPKDEBD__FMBMNDIGLIG(pSVar7,false,(MethodInfo *)0x0);
  pSVar6 = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_0346a48c;
  pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar6,StringLiteral_11996/*"Shock"*/,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  bVar4 = EIABCPKDEBD__FMBMNDIGLIG(pSVar7,false,(MethodInfo *)0x0);
  if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MDFGJKBMECA_TypeInfo);
  }
  bVar5 = MDFGJKBMECA__KFDPGIEJLEC(GAKKFJBNLFK,&local_74,method_00);
  if (!bVar5) {
    if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    MDFGJKBMECA_TypeInfo->static_fields->NIBBNNDGBAN = true;
  }
  __this = (GEBHIBIEAJE_o *)thunk_FUN_01bda818(GEBHIBIEAJE_TypeInfo);
  GEBHIBIEAJE___ctor(__this,CKCOLJLFJDB,BKAKFOPEOID,(MethodInfo *)0x0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_c0,CJNHFNHJHPE,
             (MethodInfo *)0x0);
  local_a0.hiddenValueOldByte4.fields = local_c0.hiddenValueOldByte4.fields;
  local_a0.fakeValue = local_c0.fakeValue;
  local_a0.currentCryptoKey = local_c0.currentCryptoKey;
  local_a0.hiddenValue = local_c0.hiddenValue;
  local_a0.fakeValueActive = local_c0.fakeValueActive;
  local_a0.inited = local_c0.inited;
  local_a0._18_2_ = local_c0._18_2_;
  if (__this == (GEBHIBIEAJE_o *)0x0) goto LAB_0346a48c;
  (__this->fields).DMFJKKCCEFD.fields.fakeValueActive = local_c0.fakeValueActive;
  (__this->fields).DMFJKKCCEFD.fields.inited = local_c0.inited;
  *(undefined2 *)&(__this->fields).DMFJKKCCEFD.fields.field_0x12 = local_c0._18_2_;
  (__this->fields).DMFJKKCCEFD.fields.hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)local_c0.hiddenValueOldByte4.fields;
  (__this->fields).DMFJKKCCEFD.fields.fakeValue = local_c0.fakeValue;
  (__this->fields).DMFJKKCCEFD.fields.currentCryptoKey = local_c0.currentCryptoKey;
  (__this->fields).DMFJKKCCEFD.fields.hiddenValue = local_c0.hiddenValue;
  ppSVar11 = &(__this->fields).JIJLBFGKNJK;
  *ppSVar11 = BCPAFBNLBDE;
  thunk_FUN_01c20e04(ppSVar11,BCPAFBNLBDE);
  (__this->fields).HFFAIKOAFIK = bVar2;
  ppSVar11 = &(__this->fields).JLLJJPLJDMD;
  *ppSVar11 = pSVar9;
  thunk_FUN_01c20e04(ppSVar11,pSVar9);
  ppSVar11 = &(__this->fields).DBJKFCGNMIE;
  *ppSVar11 = pSVar10;
  thunk_FUN_01c20e04(ppSVar11,pSVar10);
  (__this->fields).FBDHLHIIGKN = bVar3;
  (__this->fields).GGCKJHKNEAM = bVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_e0,local_74,
             (MethodInfo *)0x0);
  local_c0.fakeValueActive = local_e0.fakeValueActive;
  local_c0.inited = local_e0.inited;
  local_c0._18_2_ = local_e0._18_2_;
  local_c0.hiddenValueOldByte4.fields = local_e0.hiddenValueOldByte4.fields;
  local_c0.fakeValue = local_e0.fakeValue;
  local_c0.currentCryptoKey = local_e0.currentCryptoKey;
  local_c0.hiddenValue = local_e0.hiddenValue;
  (__this->fields).MPJJBPFKHIB.fields.fakeValueActive = local_e0.fakeValueActive;
  (__this->fields).MPJJBPFKHIB.fields.inited = local_e0.inited;
  *(undefined2 *)&(__this->fields).MPJJBPFKHIB.fields.field_0x12 = local_e0._18_2_;
  (__this->fields).MPJJBPFKHIB.fields.hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)local_e0.hiddenValueOldByte4.fields;
  (__this->fields).MPJJBPFKHIB.fields.fakeValue = local_e0.fakeValue;
  (__this->fields).MPJJBPFKHIB.fields.currentCryptoKey = local_e0.currentCryptoKey;
  (__this->fields).MPJJBPFKHIB.fields.hiddenValue = local_e0.hiddenValue;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_100,CJNHFNHJHPE_00,
             (MethodInfo *)0x0);
  local_e0.fakeValueActive = local_100.fakeValueActive;
  local_e0.inited = local_100.inited;
  local_e0._18_2_ = local_100._18_2_;
  local_e0.hiddenValueOldByte4.fields = local_100.hiddenValueOldByte4.fields;
  local_e0.fakeValue = local_100.fakeValue;
  local_e0.currentCryptoKey = local_100.currentCryptoKey;
  local_e0.hiddenValue = local_100.hiddenValue;
  (__this->fields).LKOFDNEFPPK.fields.fakeValueActive = local_100.fakeValueActive;
  (__this->fields).LKOFDNEFPPK.fields.inited = local_100.inited;
  *(undefined2 *)&(__this->fields).LKOFDNEFPPK.fields.field_0x12 = local_100._18_2_;
  (__this->fields).LKOFDNEFPPK.fields.hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)local_100.hiddenValueOldByte4.fields;
  (__this->fields).LKOFDNEFPPK.fields.fakeValue = local_100.fakeValue;
  (__this->fields).LKOFDNEFPPK.fields.currentCryptoKey = local_100.currentCryptoKey;
  (__this->fields).LKOFDNEFPPK.fields.hiddenValue = local_100.hiddenValue;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_118,CJNHFNHJHPE_01,
             (MethodInfo *)0x0);
  local_100.fakeValueActive = local_118.fakeValueActive;
  local_100.inited = local_118.inited;
  local_100._18_2_ = local_118._18_2_;
  local_100.hiddenValueOldByte4.fields = local_118.hiddenValueOldByte4.fields;
  local_100.fakeValue = local_118.fakeValue;
  local_100.currentCryptoKey = local_118.currentCryptoKey;
  local_100.hiddenValue = local_118.hiddenValue;
  (__this->fields).LFCBECAJDAH.fields.fakeValueActive = local_118.fakeValueActive;
  (__this->fields).LFCBECAJDAH.fields.inited = local_118.inited;
  *(undefined2 *)&(__this->fields).LFCBECAJDAH.fields.field_0x12 = local_118._18_2_;
  (__this->fields).LFCBECAJDAH.fields.hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)local_118.hiddenValueOldByte4.fields;
  (__this->fields).LFCBECAJDAH.fields.fakeValue = local_118.fakeValue;
  (__this->fields).LFCBECAJDAH.fields.currentCryptoKey = local_118.currentCryptoKey;
  (__this->fields).LFCBECAJDAH.fields.hiddenValue = local_118.hiddenValue;
  bVar3 = System_String__op_Equality(pSVar8,StringLiteral_5627/*"Edge"*/,(MethodInfo *)0x0);
  if (bVar3) {
    pSVar12 = GBJGJEGPHKD__ALHGHGNPDMG(BCKBBGCOMJD,(MethodInfo *)0x0);
    lVar13 = Method_System_Collections_Generic_List<GEBHIBIEAJE>_Add__;
    if (pSVar12 == (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0) goto LAB_0346a48c;
    pGVar15 = (pSVar12->fields)._items;
    (pSVar12->fields)._version = (pSVar12->fields)._version + 1;
    if (pGVar15 == (GEBHIBIEAJE_array *)0x0) goto LAB_0346a48c;
    uVar1 = (pSVar12->fields)._size;
    if (uVar1 < (uint)pGVar15->max_length) {
      (pSVar12->fields)._size = uVar1 + 1;
      pGVar15->m_Items[(int)uVar1] = __this;
      thunk_FUN_01c20e04(pGVar15->m_Items + (int)uVar1,__this);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar12,(Il2CppObject *)__this,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
    if (bVar2) {
      pSVar12 = GBJGJEGPHKD__EKHACIPBPAP(BCKBBGCOMJD,(MethodInfo *)0x0);
      lVar13 = Method_System_Collections_Generic_List<GEBHIBIEAJE>_Add__;
      goto joined_r0x0346a2ec;
    }
  }
  else {
    bVar2 = System_String__op_Equality(pSVar8,StringLiteral_9258/*"Muscle"*/,(MethodInfo *)0x0);
    if (!bVar2) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args != (System_Object_array *)0x0) {
        if ((pSVar8 != (System_String_o *)0x0) &&
           (lVar13 = thunk_FUN_01bda71c(pSVar8,(((args->obj).klass)->_1).element_class), lVar13 == 0
           )) {
          uVar14 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar14,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)pSVar8;
          thunk_FUN_01c20e04(args->m_Items,pSVar8);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_14995/*"Wring type edge: {0}"*/,args,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      goto LAB_0346a48c;
    }
    pSVar12 = GBJGJEGPHKD__EOBFJEHFFED(BCKBBGCOMJD,(MethodInfo *)0x0);
    lVar13 = Method_System_Collections_Generic_List<GEBHIBIEAJE>_Add__;
joined_r0x0346a2ec:
    Method_System_Collections_Generic_List<GEBHIBIEAJE>_Add__ = lVar13;
    if (pSVar12 == (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0) goto LAB_0346a48c;
    pGVar15 = (pSVar12->fields)._items;
    (pSVar12->fields)._version = (pSVar12->fields)._version + 1;
    if (pGVar15 == (GEBHIBIEAJE_array *)0x0) goto LAB_0346a48c;
    uVar1 = (pSVar12->fields)._size;
    if (uVar1 < (uint)pGVar15->max_length) {
      (pSVar12->fields)._size = uVar1 + 1;
      pGVar15->m_Items[(int)uVar1] = __this;
      thunk_FUN_01c20e04(pGVar15->m_Items + (int)uVar1,__this);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar12,(Il2CppObject *)__this,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
  }
  pSVar12 = GBJGJEGPHKD__MPGCPFKOCOB(BCKBBGCOMJD,(MethodInfo *)0x0);
  lVar13 = Method_System_Collections_Generic_List<GEBHIBIEAJE>_Add__;
  if (pSVar12 != (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0) {
    pGVar15 = (pSVar12->fields)._items;
    (pSVar12->fields)._version = (pSVar12->fields)._version + 1;
    if (pGVar15 != (GEBHIBIEAJE_array *)0x0) {
      uVar1 = (pSVar12->fields)._size;
      if (uVar1 < (uint)pGVar15->max_length) {
        (pSVar12->fields)._size = uVar1 + 1;
        pGVar15->m_Items[(int)uVar1] = __this;
        thunk_FUN_01c20e04(pGVar15->m_Items + (int)uVar1,__this);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar12,(Il2CppObject *)__this,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
      return;
    }
  }
LAB_0346a48c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void HNIHOIAMDPC(GBJGJEGPHKD BCKBBGCOMJD, XmlDocument LKILNGEECIJ, string GAKKFJBNLFK)  [RVA 0x336A4A0]
// MDFGJKBMECA$$HNIHOIAMDPC @ RVA 0x336A4A0

void MDFGJKBMECA__HNIHOIAMDPC
               (GBJGJEGPHKD_o *BCKBBGCOMJD,System_Xml_XmlDocument_o *LKILNGEECIJ,
               System_String_o *GAKKFJBNLFK,MethodInfo *method)

{
  System_Xml_XmlNode_o *LKILNGEECIJ_00;
  MethodInfo *method_00;
  
  if ((DAT_04567ad9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MDFGJKBMECA_TypeInfo);
    FUN_01bab630(&StringLiteral_9550/*"Nodes was not parsed"*/);
    FUN_01bab630(&StringLiteral_4191/*"Capsules was not parsed"*/);
    FUN_01bab630(&StringLiteral_13921/*"Triangles was not parsed"*/);
    FUN_01bab630(&StringLiteral_5629/*"Edges was not parsed"*/);
    FUN_01bab630(&StringLiteral_11719/*"Scene"*/);
    DAT_04567ad9 = 1;
  }
  if (LKILNGEECIJ != (System_Xml_XmlDocument_o *)0x0) {
    method_00 = (LKILNGEECIJ->klass->vtable)._51_get_Item.method;
    LKILNGEECIJ_00 =
         (System_Xml_XmlNode_o *)
         (*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)(LKILNGEECIJ,StringLiteral_11719/*"Scene"*/);
    if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MDFGJKBMECA_TypeInfo);
    }
    MDFGJKBMECA__ABCNILIJHCG(BCKBBGCOMJD,LKILNGEECIJ_00,method_00);
    if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    MDFGJKBMECA__NHFNCHCKIJJ(BCKBBGCOMJD,LKILNGEECIJ_00,GAKKFJBNLFK,method);
    if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    MDFGJKBMECA__OCIOEHCIKOK(BCKBBGCOMJD,LKILNGEECIJ_00,(MethodInfo *)GAKKFJBNLFK);
    if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    MDFGJKBMECA__LDALHGPNFFL(BCKBBGCOMJD,LKILNGEECIJ_00,(MethodInfo *)GAKKFJBNLFK);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void OIECFKNAJEA()  [RVA 0x336A5D8]
// MDFGJKBMECA$$OIECFKNAJEA @ RVA 0x336A5D8

void MDFGJKBMECA__OIECFKNAJEA(MethodInfo *method)

{
  MDFGJKBMECA_OJOAPHBHAFL_o *__this;
  MethodInfo *in_x1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  if ((DAT_04567ada & 1) == 0) {
    FUN_01bab630(&MDFGJKBMECA_TypeInfo);
    DAT_04567ada = 1;
    in_x1 = extraout_x1;
  }
  if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    in_x1 = extraout_x1_00;
  }
  __this = MDFGJKBMECA_TypeInfo->static_fields->FGJCGBEGDOC;
  if (__this != (MDFGJKBMECA_OJOAPHBHAFL_o *)0x0) {
    MDFGJKBMECA_OJOAPHBHAFL__KIJILFAEKEL(__this,in_x1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void LJNPDCKKONL(List<MGNDHCBAPEN<string, float>> KFAAOJOLHMC, XmlNode AHDGNOJPPIB, bool IEHAOLHMHMG)  [RVA 0x33673B4]
// MDFGJKBMECA$$LJNPDCKKONL @ RVA 0x33673B4

void MDFGJKBMECA__LJNPDCKKONL
               (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *KFAAOJOLHMC,
               System_Xml_XmlNode_o *AHDGNOJPPIB,bool IEHAOLHMHMG,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  int32_t value;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  MDFGJKBMECA_LGNCFOEJBDP_o *pMVar5;
  System_String_o *pSVar6;
  System_String_o *name;
  MGNDHCBAPEN_string__float__o *__this;
  MethodInfo *pMVar7;
  MGNDHCBAPEN_string__float__array *pMVar8;
  int GCMHMONNHII;
  float JGGJNLLANAE;
  
  if ((DAT_04567adb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_set_Capacity__)
    ;
    FUN_01bab630(&MDFGJKBMECA_TypeInfo);
    FUN_01bab630(&Method_MGNDHCBAPEN<string,_float>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<string,_float>_TypeInfo);
    FUN_01bab630(&StringLiteral_9551/*"NodesCount"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567adb = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_9551/*"NodesCount"*/,(MethodInfo *)0x0);
      value = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
      if (0 < value) {
        if (KFAAOJOLHMC == (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)0x0)
        goto LAB_03467650;
        pMVar7 = Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_set_Capacity__;
        System_Collections_Generic_List<object>__set_Capacity
                  ((System_Collections_Generic_List_object__o *)KFAAOJOLHMC,value,
                   (MethodInfo_26E4930 *)
                   Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_set_Capacity__
                  );
        GCMHMONNHII = 0;
        do {
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(MDFGJKBMECA_TypeInfo);
          }
          pMVar5 = MDFGJKBMECA_TypeInfo->static_fields->OLLGKNHHHFJ;
          if (pMVar5 == (MDFGJKBMECA_LGNCFOEJBDP_o *)0x0) goto LAB_03467650;
          GCMHMONNHII = GCMHMONNHII + 1;
          pSVar6 = MDFGJKBMECA_LGNCFOEJBDP__PPOILNKHDCK(pMVar5,GCMHMONNHII,pMVar7);
          if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03467650;
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar3,pSVar6,(MethodInfo *)0x0);
          pMVar7 = (MethodInfo *)0x0;
          pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          JGGJNLLANAE = 0.0;
          if (IEHAOLHMHMG) {
            pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(MDFGJKBMECA_TypeInfo);
            }
            pMVar5 = MDFGJKBMECA_TypeInfo->static_fields->OLLGKNHHHFJ;
            if ((pMVar5 == (MDFGJKBMECA_LGNCFOEJBDP_o *)0x0) ||
               (name = MDFGJKBMECA_LGNCFOEJBDP__INOFPDCPHNG(pMVar5,GCMHMONNHII,pMVar7),
               pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_03467650;
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar3,name,(MethodInfo *)0x0);
            JGGJNLLANAE = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
          }
          __this = (MGNDHCBAPEN_string__float__o *)
                   thunk_FUN_01bda818(MGNDHCBAPEN<string,_float>_TypeInfo);
          pMVar7 = Method_MGNDHCBAPEN<string,_float>__ctor__;
          MGNDHCBAPEN<object,_float>___ctor
                    ((MGNDHCBAPEN_T1__T2__o *)__this,(Il2CppObject *)pSVar6,JGGJNLLANAE,
                     (MethodInfo_27BB5C4 *)Method_MGNDHCBAPEN<string,_float>__ctor__);
          lVar2 = Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_Add__;
          pMVar8 = (KFAAOJOLHMC->fields)._items;
          (KFAAOJOLHMC->fields)._version = (KFAAOJOLHMC->fields)._version + 1;
          if (pMVar8 == (MGNDHCBAPEN_string__float__array *)0x0) goto LAB_03467650;
          uVar1 = (KFAAOJOLHMC->fields)._size;
          if (uVar1 < (uint)pMVar8->max_length) {
            (KFAAOJOLHMC->fields)._size = uVar1 + 1;
            pMVar8->m_Items[(int)uVar1] = __this;
            thunk_FUN_01c20e04(pMVar8->m_Items + (int)uVar1,__this);
          }
          else {
            pMVar7 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)KFAAOJOLHMC,
                       (Il2CppObject *)__this,(MethodInfo_26E4DAC *)pMVar7);
          }
        } while (value != GCMHMONNHII);
      }
      return;
    }
  }
LAB_03467650:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void ALKHMIFLGHH(GBJGJEGPHKD BCKBBGCOMJD, XmlNode AHDGNOJPPIB)  [RVA 0x3367A34]
// MDFGJKBMECA$$ALKHMIFLGHH @ RVA 0x3367A34

void MDFGJKBMECA__ALKHMIFLGHH
               (GBJGJEGPHKD_o *BCKBBGCOMJD,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  IEFEBEDLHNN_o *FLGDFENHMKM;
  IEFEBEDLHNN_o *JEKJCJEOEBG;
  IEFEBEDLHNN_o *MGEDBHMONNP;
  BIDBHCDLLHH_o *__this;
  System_Collections_Generic_List_BIDBHCDLLHH__o *__this_00;
  HHLPEJCDCBH_o *__this_01;
  BIDBHCDLLHH_array *pBVar6;
  OLKKAIFGGAK_o *pOVar7;
  Nekki_SF2_Core_Fights_Renders_Model_MeshRender_o *pNVar8;
  
  if ((DAT_04567adc & 1) == 0) {
    FUN_01bab630(&BIDBHCDLLHH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BIDBHCDLLHH>_Add__);
    FUN_01bab630(&StringLiteral_9547/*"Node3"*/);
    FUN_01bab630(&StringLiteral_9545/*"Node1"*/);
    FUN_01bab630(&StringLiteral_9546/*"Node2"*/);
    DAT_04567adc = 1;
  }
  if ((((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
       (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
       pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0)) &&
      (pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                          (pSVar3,StringLiteral_9545/*"Node1"*/,(MethodInfo *)0x0),
      pSVar4 != (System_Xml_XmlAttribute_o *)0x0)) &&
     (pSVar5 = (System_String_o *)
               (*(pSVar4->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar4,(pSVar4->klass->vtable)._9_get_Value.method),
     BCKBBGCOMJD != (GBJGJEGPHKD_o *)0x0)) {
    FLGDFENHMKM = GBJGJEGPHKD__OCJAHBKIFNO(BCKBBGCOMJD,pSVar5,(MethodInfo *)0x0);
    if (FLGDFENHMKM == (IEFEBEDLHNN_o *)0x0) {
      return;
    }
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if ((pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
       (pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_9546/*"Node2"*/,(MethodInfo *)0x0),
       pSVar4 != (System_Xml_XmlAttribute_o *)0x0)) {
      pSVar5 = (System_String_o *)
               (*(pSVar4->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar4,(pSVar4->klass->vtable)._9_get_Value.method);
      JEKJCJEOEBG = GBJGJEGPHKD__OCJAHBKIFNO(BCKBBGCOMJD,pSVar5,(MethodInfo *)0x0);
      if (JEKJCJEOEBG == (IEFEBEDLHNN_o *)0x0) {
        return;
      }
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if ((pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
         (pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_9547/*"Node3"*/,(MethodInfo *)0x0),
         pSVar4 != (System_Xml_XmlAttribute_o *)0x0)) {
        pSVar5 = (System_String_o *)
                 (*(pSVar4->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar4,(pSVar4->klass->vtable)._9_get_Value.method);
        MGEDBHMONNP = GBJGJEGPHKD__OCJAHBKIFNO(BCKBBGCOMJD,pSVar5,(MethodInfo *)0x0);
        if (MGEDBHMONNP == (IEFEBEDLHNN_o *)0x0) {
          return;
        }
        pSVar5 = (System_String_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
        __this = (BIDBHCDLLHH_o *)thunk_FUN_01bda818(BIDBHCDLLHH_TypeInfo);
        BIDBHCDLLHH___ctor(__this,FLGDFENHMKM,JEKJCJEOEBG,MGEDBHMONNP,pSVar5,(MethodInfo *)0x0);
        __this_00 = GBJGJEGPHKD__MNOHLIHHCOI(BCKBBGCOMJD,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<BIDBHCDLLHH>_Add__;
        if (__this_00 != (System_Collections_Generic_List_BIDBHCDLLHH__o *)0x0) {
          pBVar6 = (__this_00->fields)._items;
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (pBVar6 != (BIDBHCDLLHH_array *)0x0) {
            uVar1 = (__this_00->fields)._size;
            if (uVar1 < (uint)pBVar6->max_length) {
              (__this_00->fields)._size = uVar1 + 1;
              pBVar6->m_Items[(int)uVar1] = __this;
              thunk_FUN_01c20e04(pBVar6->m_Items + (int)uVar1,__this);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,
                         (Il2CppObject *)__this,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pOVar7 = (BCKBBGCOMJD->fields).KOHECBJAFKG;
            if (((pOVar7 != (OLKKAIFGGAK_o *)0x0) &&
                (pNVar8 = (pOVar7->fields).GDGLJMKPFOO,
                pNVar8 != (Nekki_SF2_Core_Fights_Renders_Model_MeshRender_o *)0x0)) &&
               (__this_01 = (pNVar8->fields).KMFFEHGLKOC, __this_01 != (HHLPEJCDCBH_o *)0x0)) {
              HHLPEJCDCBH__ELFKPOFCCHF
                        (__this_01,FLGDFENHMKM,JEKJCJEOEBG,MGEDBHMONNP,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void BKCFPHNEONL(GBJGJEGPHKD BCKBBGCOMJD, List<string> MEOBNMMHFGG)  [RVA 0x336A790]
// MDFGJKBMECA$$BKCFPHNEONL @ RVA 0x336A790

void MDFGJKBMECA__BKCFPHNEONL
               (GBJGJEGPHKD_o *BCKBBGCOMJD,System_Collections_Generic_List_string__o *MEOBNMMHFGG,
               MethodInfo *method)

{
  Il2CppObject *LFGKEPCBPKF;
  bool bVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *b;
  System_String_o *pSVar4;
  System_Xml_XmlDocument_o *LKILNGEECIJ;
  System_Object_array *args;
  long lVar5;
  undefined8 uVar6;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  MDFGJKBMECA_OJOAPHBHAFL_o *__this;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04567add & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4084);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4085);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4086);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4087);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4088);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4089);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&MDFGJKBMECA_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    DAT_04567add = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (MEOBNMMHFGG != (System_Collections_Generic_List_string__o *)0x0) {
    if ((MEOBNMMHFGG->fields)._size != 0) {
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4084,
                 (MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4085,
                 (MethodInfo *)0x0);
      b = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)MEOBNMMHFGG,
                 Method_System_Collections_Generic_List<string>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__
                               ), LFGKEPCBPKF = local_80.fields._current, bVar1) {
        bVar1 = System_String__op_Equality
                          ((System_String_o *)local_80.fields._current,b,(MethodInfo *)0x0);
        if (!bVar1) {
          if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this = MDFGJKBMECA_TypeInfo->static_fields->FGJCGBEGDOC;
          if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo);
          }
          pSVar4 = MGENAMAJALB__CIKNLBCABMJ((MethodInfo *)0x0);
          method_00 = (MethodInfo *)0x0;
          pSVar4 = GIAMPEGMNHE__JIGCIBMKDAL(pSVar4,(System_String_o *)LFGKEPCBPKF,(MethodInfo *)0x0)
          ;
          if (__this == (MDFGJKBMECA_OJOAPHBHAFL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          LKILNGEECIJ = MDFGJKBMECA_OJOAPHBHAFL__BGPCDOCFCEH(__this,pSVar4,method_00);
          if (LKILNGEECIJ == (System_Xml_XmlDocument_o *)0x0) {
            pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar2,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4088,
                       (MethodInfo *)0x0);
            pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar3,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4089,
                       (MethodInfo *)0x0);
            pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
            args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
            if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if (((System_String_o *)LFGKEPCBPKF != (System_String_o *)0x0) &&
               (lVar5 = thunk_FUN_01bda71c(LFGKEPCBPKF,(((args->obj).klass)->_1).element_class),
               lVar5 == 0)) {
              uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar6,0);
            }
            if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            args->m_Items[0] = LFGKEPCBPKF;
            thunk_FUN_01c20e04(args->m_Items,LFGKEPCBPKF);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogErrorFormat(pSVar4,args,(MethodInfo *)0x0);
          }
          else {
            if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            MDFGJKBMECA_TypeInfo->static_fields->NIBBNNDGBAN = false;
            MDFGJKBMECA__HNIHOIAMDPC(BCKBBGCOMJD,LKILNGEECIJ,(System_String_o *)LFGKEPCBPKF,in_x3);
            if (MDFGJKBMECA_TypeInfo->static_fields->NIBBNNDGBAN != false) {
              pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar2,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4086,
                         (MethodInfo *)0x0);
              pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar3,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4087,
                         (MethodInfo *)0x0);
              pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
              pSVar4 = System_String__Concat
                                 (pSVar4,(System_String_o *)LFGKEPCBPKF,(MethodInfo *)0x0);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__Log((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
      if (BCKBBGCOMJD == (GBJGJEGPHKD_o *)0x0) goto LAB_0346abec;
      GBJGJEGPHKD__FMAGIKOPMNM(BCKBBGCOMJD,(MethodInfo *)0x0);
      GBJGJEGPHKD__CJDPPIBNAAF(BCKBBGCOMJD,(MethodInfo *)0x0);
      GBJGJEGPHKD__CHPJALNJEKB(BCKBBGCOMJD,MEOBNMMHFGG,(MethodInfo *)0x0);
      GBJGJEGPHKD__EFDNNDEOKMO(BCKBBGCOMJD,(MethodInfo *)0x0);
      GBJGJEGPHKD__POBIFAEFKHC(BCKBBGCOMJD,(MethodInfo *)0x0);
    }
    return;
  }
LAB_0346abec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void DACAKKGACEM()  [RVA 0x336AF2C]
// MDFGJKBMECA$$DACAKKGACEM @ RVA 0x336AF2C

void MDFGJKBMECA__DACAKKGACEM(MethodInfo *method)

{
  MDFGJKBMECA_OJOAPHBHAFL_o *__this;
  MethodInfo *in_x1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  if ((DAT_04567ade & 1) == 0) {
    FUN_01bab630(&MDFGJKBMECA_TypeInfo);
    DAT_04567ade = 1;
    in_x1 = extraout_x1;
  }
  if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    in_x1 = extraout_x1_00;
  }
  __this = MDFGJKBMECA_TypeInfo->static_fields->FGJCGBEGDOC;
  if (__this != (MDFGJKBMECA_OJOAPHBHAFL_o *)0x0) {
    MDFGJKBMECA_OJOAPHBHAFL__AGHAGAMDNPE(__this,in_x1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

