// TypeDefIndex 1337
// Namespace: 
// public class IDLLJHPDAHE
// Fields:
//   private List<IDLLJHPDAHE.GEBJFKLEAMM> DOJGLDBNDPC; // 0x10

// ===== public float EMFJKENHDJG()  [RVA 0x315E644]
// IDLLJHPDAHE$$EMFJKENHDJG @ RVA 0x315E644

float IDLLJHPDAHE__EMFJKENHDJG(IDLLJHPDAHE_o *__this,MethodInfo *method)

{
  MethodInfo *in_x3;
  float fVar1;
  
  if ((DAT_04566877 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10092/*"PainRecharge"*/);
    DAT_04566877 = 1;
  }
  fVar1 = IDLLJHPDAHE__IBHPNNBHECE(__this,StringLiteral_10092/*"PainRecharge"*/,(PJKHAJKEHEL_o *)0x0,in_x3);
  return fVar1;
}


// ===== public float PCKEODLOPEN(PJKHAJKEHEL NDOMOKBINFD)  [RVA 0x315E78C]
// IDLLJHPDAHE$$PCKEODLOPEN @ RVA 0x315E78C

float IDLLJHPDAHE__PCKEODLOPEN(IDLLJHPDAHE_o *__this,PJKHAJKEHEL_o *NDOMOKBINFD,MethodInfo *method)

{
  MethodInfo *in_x3;
  float fVar1;
  
  if ((DAT_04566878 & 1) == 0) {
    FUN_01bab630(&StringLiteral_7527/*"InitialCharge"*/);
    DAT_04566878 = 1;
  }
  fVar1 = IDLLJHPDAHE__IBHPNNBHECE(__this,StringLiteral_7527/*"InitialCharge"*/,NDOMOKBINFD,in_x3);
  return fVar1;
}


// ===== public float FBBIAEAJKIJ(PJKHAJKEHEL NDOMOKBINFD)  [RVA 0x315E7E4]
// IDLLJHPDAHE$$FBBIAEAJKIJ @ RVA 0x315E7E4

float IDLLJHPDAHE__FBBIAEAJKIJ(IDLLJHPDAHE_o *__this,PJKHAJKEHEL_o *NDOMOKBINFD,MethodInfo *method)

{
  MethodInfo *in_x3;
  float fVar1;
  
  if ((DAT_04566879 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5071/*"DamageRecharge"*/);
    DAT_04566879 = 1;
  }
  fVar1 = IDLLJHPDAHE__IBHPNNBHECE(__this,StringLiteral_5071/*"DamageRecharge"*/,NDOMOKBINFD,in_x3);
  return fVar1;
}


// ===== public float PCKEODLOPEN(OLKKAIFGGAK BCKBBGCOMJD)  [RVA 0x315E83C]
// IDLLJHPDAHE$$PCKEODLOPEN @ RVA 0x315E83C

float IDLLJHPDAHE__PCKEODLOPEN(IDLLJHPDAHE_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  float fVar1;
  
  if (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) {
    fVar1 = IDLLJHPDAHE__PCKEODLOPEN(__this,(BCKBBGCOMJD->fields).FAPMJJBOFEF,method);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float EGJBDDAOKIG(OLKKAIFGGAK BCKBBGCOMJD)  [RVA 0x315E854]
// IDLLJHPDAHE$$EGJBDDAOKIG @ RVA 0x315E854

float IDLLJHPDAHE__EGJBDDAOKIG(IDLLJHPDAHE_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  float fVar1;
  
  if (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) {
    fVar1 = IDLLJHPDAHE__EGJBDDAOKIG(__this,(BCKBBGCOMJD->fields).FAPMJJBOFEF,method);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IDLLJHPDAHE.GEBJFKLEAMM EADLGLJJBGB(string KGLJICLJHEL)  [RVA 0x315E8C4]
// IDLLJHPDAHE$$EADLGLJJBGB @ RVA 0x315E8C4

IDLLJHPDAHE_GEBJFKLEAMM_o *
IDLLJHPDAHE__EADLGLJJBGB(IDLLJHPDAHE_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_IDLLJHPDAHE_GEBJFKLEAMM__o *pSVar2;
  Il2CppObject *pIVar3;
  IDLLJHPDAHE_GEBJFKLEAMM_o *pIVar4;
  int index;
  
  if ((DAT_0456687a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IDLLJHPDAHE_GEBJFKLEAMM>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IDLLJHPDAHE_GEBJFKLEAMM>_get_Item__);
    DAT_0456687a = 1;
  }
  pSVar2 = (__this->fields).DOJGLDBNDPC;
  if (pSVar2 != (System_Collections_Generic_List_IDLLJHPDAHE_GEBJFKLEAMM__o *)0x0) {
    index = 0;
    do {
      if ((pSVar2->fields)._size <= index) {
        return (IDLLJHPDAHE_GEBJFKLEAMM_o *)0x0;
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,index,
                          Method_System_Collections_Generic_List<IDLLJHPDAHE_GEBJFKLEAMM>_get_Item__
                         );
      if (pIVar3 == (Il2CppObject *)0x0) break;
      bVar1 = System_String__op_Equality
                        ((System_String_o *)pIVar3[1].klass,KGLJICLJHEL,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar2 = (__this->fields).DOJGLDBNDPC;
        if (pSVar2 != (System_Collections_Generic_List_IDLLJHPDAHE_GEBJFKLEAMM__o *)0x0) {
          pIVar4 = (IDLLJHPDAHE_GEBJFKLEAMM_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,index,
                              Method_System_Collections_Generic_List<IDLLJHPDAHE_GEBJFKLEAMM>_get_Item__
                             );
          return pIVar4;
        }
        break;
      }
      pSVar2 = (__this->fields).DOJGLDBNDPC;
      index = index + 1;
    } while (pSVar2 != (System_Collections_Generic_List_IDLLJHPDAHE_GEBJFKLEAMM__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float NHNAFLKDEGF()  [RVA 0x315E990]
// IDLLJHPDAHE$$NHNAFLKDEGF @ RVA 0x315E990

float IDLLJHPDAHE__NHNAFLKDEGF(IDLLJHPDAHE_o *__this,MethodInfo *method)

{
  MethodInfo *in_x3;
  float fVar1;
  
  if ((DAT_0456687b & 1) == 0) {
                    /* try { // try from 0325e9b8 to 0335e9bf has its CatchHandler @ 0325ea38 */
    FUN_01bab630(&StringLiteral_5071/*"DamageRecharge"*/);
    DAT_0456687b = 1;
  }
                    /* try { // try from 0325e9cc to 0335e9d7 has its CatchHandler @ 0325ea30 */
  fVar1 = IDLLJHPDAHE__IBHPNNBHECE(__this,StringLiteral_5071/*"DamageRecharge"*/,(PJKHAJKEHEL_o *)0x0,in_x3);
  return fVar1;
}


// ===== public float ADJOOHNEPLO()  [RVA 0x315E9DC]
// IDLLJHPDAHE$$ADJOOHNEPLO @ RVA 0x315E9DC

float IDLLJHPDAHE__ADJOOHNEPLO(IDLLJHPDAHE_o *__this,MethodInfo *method)

{
  MethodInfo *in_x3;
  float fVar1;
  
                    /* try { // try from 0325e9dc to 0335e9e3 has its CatchHandler @ 0325ea34 */
                    /* try { // try from 0325e9f0 to 0335e9f7 has its CatchHandler @ 0325ea2c */
                    /* try { // try from 0325e9f8 to 0335ea1f has its CatchHandler @ 0325e700 */
  if ((DAT_0456687c & 1) == 0) {
    FUN_01bab630(&StringLiteral_7527/*"InitialCharge"*/);
    DAT_0456687c = 1;
  }
                    /* try { // try from 0325ea20 to 0335ea23 has its CatchHandler @ 0325ea28 */
                    /* try { // try from 0325ea24 to 0335ea4f has its CatchHandler @ 0325e700 */
  fVar1 = IDLLJHPDAHE__IBHPNNBHECE(__this,StringLiteral_7527/*"InitialCharge"*/,(PJKHAJKEHEL_o *)0x0,in_x3);
  return fVar1;
}


// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x315EA28]
// IDLLJHPDAHE$$HNIHOIAMDPC @ RVA 0x315EA28

/* WARNING: Removing unreachable block (ram,0x0325ed44) */

void IDLLJHPDAHE__HNIHOIAMDPC
               (IDLLJHPDAHE_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  IDLLJHPDAHE_GEBJFKLEAMM_o *__this_00;
  MethodInfo *method_00;
  System_Collections_Generic_List_IDLLJHPDAHE_GEBJFKLEAMM__o *pSVar5;
  long lVar6;
  IDLLJHPDAHE_GEBJFKLEAMM_array *pIVar7;
  ulong uVar8;
  int *piVar9;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0325ea20 with catch @ 0325ea28
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0325e9f0 with catch @ 0325ea2c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0325e9cc with catch @ 0325ea30
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0325e9dc with catch @ 0325ea34
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0325e9b8 with catch @ 0325ea38
                        */
  if ((DAT_0456687d & 1) == 0) {
                    /* try { // try from 0325ea50 to 0335ea53 has its CatchHandler @ 0325ea74 */
                    /* try { // try from 0325ea54 to 0335ea7b has its CatchHandler @ 0325e700 */
    FUN_01bab630(&IDLLJHPDAHE_GEBJFKLEAMM_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* catch() { ... } // from try @ 0325ea50 with catch @ 0325ea74 */
                    /* try { // try from 0325ea7c to 0335ea83 has its CatchHandler @ 0325ea98 */
    FUN_01bab630(&Method_System_Collections_Generic_List<IDLLJHPDAHE_GEBJFKLEAMM>_Add__);
                    /* try { // try from 0325ea84 to 0335ea8f has its CatchHandler @ 0325e700 */
    FUN_01bab630(&Method_System_Collections_Generic_List<IDLLJHPDAHE_GEBJFKLEAMM>_Clear__);
                    /* try { // try from 0325ea90 to 0335ea97 has its CatchHandler @ 0325ea98 */
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0325ea7c with catch @ 0325ea98
                       catch(type#2 @ 00000000) { ... } // from try @ 0325ea90 with catch @ 0325ea98
                        */
    DAT_0456687d = 1;
  }
  pSVar5 = (__this->fields).DOJGLDBNDPC;
  if (pSVar5 != (System_Collections_Generic_List_IDLLJHPDAHE_GEBJFKLEAMM__o *)0x0) {
    uVar1 = (pSVar5->fields)._size;
    method_00 = (MethodInfo *)(ulong)uVar1;
    (pSVar5->fields)._size = 0;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (0 < (int)uVar1) {
      System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,uVar1,(MethodInfo *)0x0);
    }
    if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
       (plVar3 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method),
       plVar3 != (long *)0x0)) {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0325eb70;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        method_00 = (MethodInfo *)0x0;
        puVar4 = (undefined8 *)FUN_01b81914(plVar3);
LAB_0325eb70:
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar8 & 1) == 0) {
          plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
          if (plVar3 == (long *)0x0) {
            return;
          }
          lVar6 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 == 0) goto LAB_0325ece4;
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_0325eccc;
        }
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_0325ebd0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        method_00 = (MethodInfo *)0x1;
        puVar4 = (undefined8 *)FUN_01b81914(plVar3);
LAB_0325ebd0:
        AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
          bVar2 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar2) ||
             ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(AHDGNOJPPIB_00);
          }
        }
        __this_00 = (IDLLJHPDAHE_GEBJFKLEAMM_o *)
                    thunk_FUN_01bda818(IDLLJHPDAHE_GEBJFKLEAMM_TypeInfo);
        System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
        lVar6 = Method_System_Collections_Generic_List<IDLLJHPDAHE_GEBJFKLEAMM>_Add__;
        pSVar5 = (__this->fields).DOJGLDBNDPC;
        if (pSVar5 == (System_Collections_Generic_List_IDLLJHPDAHE_GEBJFKLEAMM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar7 = (pSVar5->fields)._items;
        (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
        if (pIVar7 == (IDLLJHPDAHE_GEBJFKLEAMM_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (pSVar5->fields)._size;
        if (uVar1 < (uint)pIVar7->max_length) {
          (pSVar5->fields)._size = uVar1 + 1;
          pIVar7->m_Items[(int)uVar1] = __this_00;
          thunk_FUN_01c20e04(pIVar7->m_Items + (int)uVar1,__this_00);
        }
        else {
          method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)__this_00,
                     (MethodInfo_26E4DAC *)method_00);
        }
        if (__this_00 == (IDLLJHPDAHE_GEBJFKLEAMM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        IDLLJHPDAHE_GEBJFKLEAMM__HNIHOIAMDPC(__this_00,AHDGNOJPPIB_00,method_00);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_0325eccc:
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0325ed00;
    }
  }
LAB_0325ece4:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_0325ed00:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


// ===== public void .ctor()  [RVA 0x315EF10]
// IDLLJHPDAHE$$.ctor @ RVA 0x315EF10

void IDLLJHPDAHE___ctor(IDLLJHPDAHE_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_IDLLJHPDAHE_GEBJFKLEAMM__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456687e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IDLLJHPDAHE_GEBJFKLEAMM>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IDLLJHPDAHE_GEBJFKLEAMM>_TypeInfo);
    DAT_0456687e = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_IDLLJHPDAHE_GEBJFKLEAMM__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IDLLJHPDAHE_GEBJFKLEAMM>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<IDLLJHPDAHE_GEBJFKLEAMM>__ctor__);
  (__this->fields).DOJGLDBNDPC = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public float EGJBDDAOKIG(PJKHAJKEHEL NDOMOKBINFD)  [RVA 0x315E86C]
// IDLLJHPDAHE$$EGJBDDAOKIG @ RVA 0x315E86C

float IDLLJHPDAHE__EGJBDDAOKIG(IDLLJHPDAHE_o *__this,PJKHAJKEHEL_o *NDOMOKBINFD,MethodInfo *method)

{
  MethodInfo *in_x3;
  float fVar1;
  
  if ((DAT_0456687f & 1) == 0) {
    FUN_01bab630(&StringLiteral_10092/*"PainRecharge"*/);
    DAT_0456687f = 1;
  }
  fVar1 = IDLLJHPDAHE__IBHPNNBHECE(__this,StringLiteral_10092/*"PainRecharge"*/,NDOMOKBINFD,in_x3);
  return fVar1;
}


// ===== private float IBHPNNBHECE(string AFKICLAFDKC, PJKHAJKEHEL NDOMOKBINFD)  [RVA 0x315E690]
// IDLLJHPDAHE$$IBHPNNBHECE @ RVA 0x315E690

float IDLLJHPDAHE__IBHPNNBHECE
                (IDLLJHPDAHE_o *__this,System_String_o *AFKICLAFDKC,PJKHAJKEHEL_o *NDOMOKBINFD,
                MethodInfo *method)

{
  bool bVar1;
  IDLLJHPDAHE_GEBJFKLEAMM_o *pIVar2;
  FPLCEOJCPOD_o *__this_00;
  System_String_o *message;
  PJKHAJKEHEL_o *method_00;
  float fVar3;
  int32_t local_24;
  
  method_00 = NDOMOKBINFD;
  if ((DAT_04566880 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_418/*" for Magic not found"*/);
    DAT_04566880 = 1;
  }
  pIVar2 = IDLLJHPDAHE__EADLGLJJBGB(__this,AFKICLAFDKC,(MethodInfo *)method_00);
  if (pIVar2 == (IDLLJHPDAHE_GEBJFKLEAMM_o *)0x0) {
    message = System_String__Concat(AFKICLAFDKC,StringLiteral_418/*" for Magic not found"*/,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
    fVar3 = 0.0;
  }
  else if (NDOMOKBINFD == (PJKHAJKEHEL_o *)0x0) {
    fVar3 = (pIVar2->fields).EDJNGCBGHAC;
  }
  else {
    local_24 = 0;
    __this_00 = (NDOMOKBINFD->fields).ACHJNNOKEDK;
    if (__this_00 == (FPLCEOJCPOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 0325e700 to 0335e9b7 has its CatchHandler @ 0325e700
                       catch() { ... } // from try @ 0325e700 with catch @ 0325e700
                       catch() { ... } // from try @ 0325e9f8 with catch @ 0325e700
                       catch() { ... } // from try @ 0325ea24 with catch @ 0325e700
                       catch() { ... } // from try @ 0325ea54 with catch @ 0325e700
                       catch() { ... } // from try @ 0325ea84 with catch @ 0325e700 */
    bVar1 = FPLCEOJCPOD__KNMENIBLFGF
                      (__this_00,(pIVar2->fields).KEAMOFCKGHH,&local_24,true,false,(MethodInfo *)0x0
                      );
    fVar3 = (pIVar2->fields).EDJNGCBGHAC;
    if (bVar1) {
      fVar3 = fVar3 * (float)local_24;
    }
  }
  return fVar3;
}


// ===== public float FBBIAEAJKIJ(OLKKAIFGGAK BCKBBGCOMJD)  [RVA 0x315EF98]
// IDLLJHPDAHE$$FBBIAEAJKIJ @ RVA 0x315EF98

float IDLLJHPDAHE__FBBIAEAJKIJ(IDLLJHPDAHE_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  float fVar1;
  
  if (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) {
    fVar1 = IDLLJHPDAHE__FBBIAEAJKIJ(__this,(BCKBBGCOMJD->fields).FAPMJJBOFEF,method);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

