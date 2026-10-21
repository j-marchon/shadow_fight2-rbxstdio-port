// TypeDefIndex 964
// Namespace: 
// public class COFFJADEMJF : InFightRule
// Fields:
//   protected List<InfoAnimation> KOFLFFPDOMO; // 0x70

// ===== public override InFightRule GOGPCNMIJOB()  [RVA 0x30AE4A4]
// COFFJADEMJF$$GOGPCNMIJOB @ RVA 0x30AE4A4

InFightRule_o * COFFJADEMJF__GOGPCNMIJOB(COFFJADEMJF_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  int32_t ACCIHBHMFPN;
  COFFJADEMJF_o *__this_00;
  MethodInfo *in_x4;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  
  if ((DAT_045661c1 & 1) == 0) {
    FUN_01bab630(&COFFJADEMJF_TypeInfo);
    DAT_045661c1 = 1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    ACCIHBHMFPN = Rule__NHGGBEACKBD((Rule_o *)__this,(MethodInfo *)0x0);
    __this_00 = (COFFJADEMJF_o *)thunk_FUN_01bda818(COFFJADEMJF_TypeInfo);
    COFFJADEMJF___ctor(__this_00,ACCIHBHMFPN,HEHMPFLAEGE,AHDGNOJPPIB,in_x4);
    if (__this_00 != (COFFJADEMJF_o *)0x0) {
      (__this_00->fields).super.super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
      return (InFightRule_o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool EFLLMOAINGJ(string KGLJICLJHEL)  [RVA 0x30AE5F8]
// COFFJADEMJF$$EFLLMOAINGJ @ RVA 0x30AE5F8

bool COFFJADEMJF__EFLLMOAINGJ(COFFJADEMJF_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_List_ECENNHNBAME__o *__this_01;
  byte bVar2;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045661c2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>_GetEnumerator__);
    DAT_045661c2 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).KOFLFFPDOMO;
  if (__this_01 == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<InfoAnimation>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_MoveNext__);
    __this_00 = local_48.fields._current;
    if (!bVar1) {
      bVar2 = 0;
      iVar3 = 6;
      goto LAB_031ae6dc;
    }
    if ((InfoAnimation_o *)local_48.fields._current == (InfoAnimation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      (((InfoAnimation_Fields *)((long)local_48.fields._current + 0x10))->JIJLBFGKNJK,
                       KGLJICLJHEL,(MethodInfo *)0x0);
  } while ((!bVar1) &&
          (bVar1 = InfoAnimation__NHELADLJDNP
                             ((InfoAnimation_o *)__this_00,KGLJICLJHEL,(MethodInfo *)0x0), !bVar1));
  bVar2 = 1;
  iVar3 = 5;
LAB_031ae6dc:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_Dispose__);
  return (bool)(bVar2 & iVar3 == 5);
}


// ===== public void .ctor(Rule.NJHOEHEJNPH ACCIHBHMFPN, HEDFKJBDBFN HEHMPFLAEGE, XmlNode AHDGNOJPPIB)  [RVA 0x30AE540]
// COFFJADEMJF$$.ctor @ RVA 0x30AE540

void COFFJADEMJF___ctor(COFFJADEMJF_o *__this,int32_t ACCIHBHMFPN,int32_t HEHMPFLAEGE,
                       System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Collections_Generic_List_ECENNHNBAME__o *__this_00;
  System_Collections_Generic_List_ECENNHNBAME__o **ppSVar1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)(uint)HEHMPFLAEGE;
  if ((DAT_045661c3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<InfoAnimation>_TypeInfo);
    DAT_045661c3 = 1;
  }
  __this_00 = (System_Collections_Generic_List_ECENNHNBAME__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<InfoAnimation>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<InfoAnimation>__ctor__);
  ppSVar1 = &(__this->fields).KOFLFFPDOMO;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  InFightRule___ctor((InFightRule_o *)__this,ACCIHBHMFPN,HEHMPFLAEGE,AHDGNOJPPIB,
                     (InFightRule_o *)0x0,(MethodInfo *)0x0);
  COFFJADEMJF__AOFNJMCLMOH(__this,AHDGNOJPPIB,method_00);
  return;
}


// ===== public bool EFLLMOAINGJ(InfoAnimation NLEBDPHNIDI)  [RVA 0x30AEB70]
// COFFJADEMJF$$EFLLMOAINGJ @ RVA 0x30AEB70

bool COFFJADEMJF__EFLLMOAINGJ(COFFJADEMJF_o *__this,InfoAnimation_o *NLEBDPHNIDI,MethodInfo *method)

{
  bool bVar1;
  
  if (NLEBDPHNIDI != (InfoAnimation_o *)0x0) {
    bVar1 = COFFJADEMJF__EFLLMOAINGJ(__this,(NLEBDPHNIDI->fields).JIJLBFGKNJK,method);
    return bVar1;
  }
  return false;
}


// ===== protected void AOFNJMCLMOH(XmlNode AHDGNOJPPIB)  [RVA 0x30AE788]
// COFFJADEMJF$$AOFNJMCLMOH @ RVA 0x30AE788

/* WARNING: Removing unreachable block (ram,0x031aea90) */

void COFFJADEMJF__AOFNJMCLMOH
               (COFFJADEMJF_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  System_String_o *pSVar6;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  System_Collections_Generic_List_ECENNHNBAME__o *KENFFDHLNDA;
  
  if ((DAT_045661c4 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&AnimationData_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_2968/*"Animation"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045661c4 = 1;
  }
  if ((AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) ||
     (plVar3 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar7 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_031ae8c8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
                    /* try { // try from 031ae8b4 to 032aea67 has its CatchHandler @ 031ae8b4
                       catch() { ... } // from try @ 031ae8b4 with catch @ 031ae8b4
                       catch() { ... } // from try @ 031aea98 with catch @ 031ae8b4
                       catch() { ... } // from try @ 031aed28 with catch @ 031ae8b4
                       catch() { ... } // from try @ 031aee48 with catch @ 031ae8b4
                       catch() { ... } // from try @ 031aeecc with catch @ 031ae8b4 */
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_031ae8c8:
    uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar8 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_031aea2c;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_031ae928;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_031ae928:
    plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(System_Xml_XmlNode_c **)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
        System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(plVar5);
    }
    pSVar6 = (System_String_o *)
             (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    bVar2 = System_String__op_Equality(pSVar6,StringLiteral_2968/*"Animation"*/,(MethodInfo *)0x0);
    if (bVar2) {
      __this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
      if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      KENFFDHLNDA = (__this->fields).KOFLFFPDOMO;
      if ((AnimationData_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      AnimationData__CADFKPKODCI(pSVar6,KENFFDHLNDA,(MethodInfo *)0x0);
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_031aea48;
    }
  }
LAB_031aea2c:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_031aea48:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
                    /* try { // try from 031aea68 to 032aea97 has its CatchHandler @ 031aee18 */
  return;
}

