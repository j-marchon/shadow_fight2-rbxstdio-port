// TypeDefIndex 712
// Namespace: 
// public class FIALDHOKCBK : IIMNGGHGKOD
// Fields:
//   private List<string> MJBOGDFFGKL; // 0x48
//   private bool LLNHEOEJFCF; // 0x50
//   private string BFGKDFNOBIH; // 0x58

// ===== public override void DPGIIHOJJDE(OLKKAIFGGAK BCKBBGCOMJD)  [RVA 0x303B1BC]
// FIALDHOKCBK$$DPGIIHOJJDE @ RVA 0x303B1BC

void FIALDHOKCBK__DPGIIHOJJDE(FIALDHOKCBK_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  if (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) {
    OLKKAIFGGAK__AHNAGGGOLBK(BCKBBGCOMJD,__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string KCHJCGEMCGE()  [RVA 0x303B1DC]
// FIALDHOKCBK$$KCHJCGEMCGE @ RVA 0x303B1DC

System_String_o * FIALDHOKCBK__KCHJCGEMCGE(FIALDHOKCBK_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04565d82 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_DEICJJOIDDF<string>__);
    DAT_04565d82 = 1;
  }
  pSVar1 = (System_String_o *)
           DJNBJHPDKDP__DEICJJOIDDF<object>
                     ((System_Collections_Generic_List_T__o *)(__this->fields).MJBOGDFFGKL,
                      Method_DJNBJHPDKDP_DEICJJOIDDF<string>__);
  return pSVar1;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x303B224]
// FIALDHOKCBK$$.ctor @ RVA 0x303B224

void FIALDHOKCBK___ctor(FIALDHOKCBK_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o **ppSVar1;
  
  if ((DAT_04565d83 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04565d83 = 1;
  }
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar1 = &(__this->fields).MJBOGDFFGKL;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  IIMNGGHGKOD___ctor((IIMNGGHGKOD_o *)__this,4,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0313b2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._5_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._5_HNIHOIAMDPC.method);
  return;
}


// ===== public bool IPDNPCFJOAN(string ECGFFJEGJEN)  [RVA 0x303B2C8]
// FIALDHOKCBK$$IPDNPCFJOAN @ RVA 0x303B2C8

bool FIALDHOKCBK__IPDNPCFJOAN(FIALDHOKCBK_o *__this,System_String_o *ECGFFJEGJEN,MethodInfo *method)

{
  bool bVar1;
  
  if ((__this->fields).LLNHEOEJFCF != false) {
    return true;
  }
  bVar1 = System_String__op_Equality(ECGFFJEGJEN,(__this->fields).BFGKDFNOBIH,(MethodInfo *)0x0);
  return bVar1;
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x303B2EC]
// FIALDHOKCBK$$HNIHOIAMDPC @ RVA 0x303B2EC

/* WARNING: Removing unreachable block (ram,0x0313b670) */

void FIALDHOKCBK__HNIHOIAMDPC
               (FIALDHOKCBK_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  System_String_array *pSVar10;
  ulong uVar11;
  int *piVar12;
  System_Collections_Generic_List_string__o *__this_00;
  
  if ((DAT_04565d84 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_5599/*"ERR_RAND_SOUND_NO_NAME"*/);
    FUN_01bab630(&StringLiteral_14831/*"Voice"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565d84 = 1;
  }
  IIMNGGHGKOD__HNIHOIAMDPC((IIMNGGHGKOD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar3,StringLiteral_14831/*"Voice"*/,(MethodInfo *)0x0);
    (__this->fields).LLNHEOEJFCF = pSVar4 == (System_Xml_XmlAttribute_o *)0x0;
    pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    (__this->fields).BFGKDFNOBIH = pSVar5;
    thunk_FUN_01c20e04();
    plVar6 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar9 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0313b498;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_0313b498:
        uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar11 & 1) == 0) {
          plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
          if (plVar6 == (long *)0x0) {
            return;
          }
          lVar9 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 == 0) goto LAB_0313b60c;
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_0313b5f4;
        }
        lVar9 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_0313b4f8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_0313b4f8:
        plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
        __this_00 = (__this->fields).MJBOGDFFGKL;
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_5599/*"ERR_RAND_SOUND_NO_NAME"*/,(MethodInfo *)0x0);
        lVar9 = Method_System_Collections_Generic_List<string>_Add__;
        if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar10 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pSVar10 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar10->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pSVar10->m_Items[(int)uVar2] = pSVar5;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_0313b5f4:
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0313b628;
    }
  }
LAB_0313b60c:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_0313b628:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}

