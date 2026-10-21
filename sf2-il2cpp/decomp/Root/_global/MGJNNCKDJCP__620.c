// TypeDefIndex 620
// Namespace: 
// public class MGJNNCKDJCP : BOFEMGGNODC
// Fields:
//   private string IDNBELKLCEL; // 0x68
//   private string MHDJAEILAJL; // 0x70
//   private readonly XmlDocument HJKLIDCAEOE; // 0x78

// ===== private void GPNMPFADPOJ(EILGGBOIMGE.FMFDKGKCBBG HPACPFLKHPK, LEGDPJHPEOB PFDEAPMMFAP)  [RVA 0x35C3718]
// MGJNNCKDJCP$$GPNMPFADPOJ @ RVA 0x35C3718

void MGJNNCKDJCP__GPNMPFADPOJ
               (MGJNNCKDJCP_o *__this,EILGGBOIMGE_FMFDKGKCBBG_o *HPACPFLKHPK,
               LEGDPJHPEOB_o *PFDEAPMMFAP,MethodInfo *method)

{
  System_Xml_XmlDocument_o *__this_00;
  MGJNNCKDJCP_o *__this_01;
  FOKJBDHLIMG_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *in_x4;
  
  if ((DAT_04568f52 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* try { // try from 036c3760 to 037c3807 has its CatchHandler @ 036c3760
                       catch() { ... } // from try @ 036c3760 with catch @ 036c3760
                       catch() { ... } // from try @ 036c382c with catch @ 036c3760
                       catch() { ... } // from try @ 036c3878 with catch @ 036c3760
                       catch() { ... } // from try @ 036c38a0 with catch @ 036c3760
                       catch() { ... } // from try @ 036c38e0 with catch @ 036c3760 */
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    DAT_04568f52 = 1;
  }
  __this_00 = (System_Xml_XmlDocument_o *)thunk_FUN_01bda818(System_Xml_XmlDocument_TypeInfo);
  System_Xml_XmlDocument___ctor(__this_00,(MethodInfo *)0x0);
  MGJNNCKDJCP__MNDFPLAFICI
            (__this_01,(System_Xml_XmlNode_o *)(__this->fields).HJKLIDCAEOE,
             (System_Xml_XmlNode_o *)__this_00,method);
  MGJNNCKDJCP__OMENLOHIJIC(__this,(System_Xml_XmlNode_o *)__this_00,HPACPFLKHPK,PFDEAPMMFAP,in_x4);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_02 = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
  if (__this_02 != (FOKJBDHLIMG_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    FOKJBDHLIMG__PJKJHCHFLHD
              (__this_02,(System_Xml_XmlNode_o *)__this_00,false,false,(MethodInfo *)0x0);
    MGJNNCKDJCP__OPANNCEJFML(__this,(System_Xml_XmlNode_o *)__this_00,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x35C4680]
// MGJNNCKDJCP$$HNIHOIAMDPC @ RVA 0x35C4680

void MGJNNCKDJCP__HNIHOIAMDPC
               (MGJNNCKDJCP_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  MGJNNCKDJCP_o *__this_00;
  MethodInfo *in_x3;
  System_String_o **ppSVar4;
  
  if ((DAT_04568f53 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3023/*"ApplyTo"*/);
    FUN_01bab630(&StringLiteral_8095/*"Item"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568f53 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_3023/*"ApplyTo"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).IDNBELKLCEL = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_8095/*"Item"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        ppSVar4 = &(__this->fields).MHDJAEILAJL;
        *ppSVar4 = pSVar3;
        __this_00 = (MGJNNCKDJCP_o *)thunk_FUN_01c20e04(ppSVar4,pSVar3);
        MGJNNCKDJCP__MNDFPLAFICI
                  (__this_00,NPLGCIFGFOK,(System_Xml_XmlNode_o *)(__this->fields).HJKLIDCAEOE,in_x3)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private List<PKKLIJLIKGF> EDAHAFNGECF(XmlNode AHDGNOJPPIB)  [RVA 0x35C478C]
// MGJNNCKDJCP$$EDAHAFNGECF @ RVA 0x35C478C

/* WARNING: Removing unreachable block (ram,0x036c4a98) */

System_Collections_Generic_List_PKKLIJLIKGF__o *
MGJNNCKDJCP__EDAHAFNGECF(MGJNNCKDJCP_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_Collections_Generic_List_PKKLIJLIKGF__o *__this_00;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  PKKLIJLIKGF_o *__this_01;
  long lVar5;
  PKKLIJLIKGF_array *pPVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_04568f54 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
    FUN_01bab630(&PKKLIJLIKGF_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04568f54 = 1;
  }
  __this_00 = (System_Collections_Generic_List_PKKLIJLIKGF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
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
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_036c48d4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_036c48d4:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
      if (plVar3 == (long *)0x0) {
        return __this_00;
      }
      lVar5 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_036c4a38;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_036c4934;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_036c4934:
    AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
         ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(AHDGNOJPPIB_00);
      }
    }
    __this_01 = (PKKLIJLIKGF_o *)thunk_FUN_01bda818(PKKLIJLIKGF_TypeInfo);
    PKKLIJLIKGF___ctor(__this_01,AHDGNOJPPIB_00,(MethodInfo *)0x0);
    lVar5 = Method_System_Collections_Generic_List<PKKLIJLIKGF>_Add__;
    if (__this_00 == (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pPVar6 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pPVar6 == (PKKLIJLIKGF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pPVar6->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      pPVar6->m_Items[(int)uVar2] = __this_01;
      thunk_FUN_01c20e04(pPVar6->m_Items + (int)uVar2,__this_01);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this_01,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_036c4a54;
    }
  }
LAB_036c4a38:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_036c4a54:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return __this_00;
}


// ===== public void .ctor()  [RVA 0x35C4B60]
// MGJNNCKDJCP$$.ctor @ RVA 0x35C4B60

void MGJNNCKDJCP___ctor(MGJNNCKDJCP_o *__this,MethodInfo *method)

{
  System_Xml_XmlDocument_o *__this_00;
  System_Xml_XmlDocument_o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568f55 & 1) == 0) {
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    DAT_04568f55 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Xml_XmlDocument_o *)thunk_FUN_01bda818(System_Xml_XmlDocument_TypeInfo,method)
  ;
  System_Xml_XmlDocument___ctor(__this_00,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields).HJKLIDCAEOE;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void EPGONHLDJFD(EILGGBOIMGE.FMFDKGKCBBG HPACPFLKHPK, LEGDPJHPEOB PFDEAPMMFAP)  [RVA 0x35C4BCC]
// MGJNNCKDJCP$$EPGONHLDJFD @ RVA 0x35C4BCC

void MGJNNCKDJCP__EPGONHLDJFD
               (MGJNNCKDJCP_o *__this,EILGGBOIMGE_FMFDKGKCBBG_o *HPACPFLKHPK,
               LEGDPJHPEOB_o *PFDEAPMMFAP,MethodInfo *method)

{
  System_Xml_XmlDocument_o *__this_00;
  MGJNNCKDJCP_o *__this_01;
  MGJNNCKDJCP_o *__this_02;
  System_Collections_Generic_List_PKKLIJLIKGF__o *LDAIPGBJEOG;
  MethodInfo *method_00;
  MethodInfo *in_x4;
  
  if ((DAT_04568f56 & 1) == 0) {
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    DAT_04568f56 = 1;
  }
  __this_00 = (System_Xml_XmlDocument_o *)thunk_FUN_01bda818(System_Xml_XmlDocument_TypeInfo);
  System_Xml_XmlDocument___ctor(__this_00,(MethodInfo *)0x0);
  MGJNNCKDJCP__MNDFPLAFICI
            (__this_01,(System_Xml_XmlNode_o *)(__this->fields).HJKLIDCAEOE,
             (System_Xml_XmlNode_o *)__this_00,method);
  MGJNNCKDJCP__OMENLOHIJIC(__this,(System_Xml_XmlNode_o *)__this_00,HPACPFLKHPK,PFDEAPMMFAP,in_x4);
  if ((HPACPFLKHPK != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) &&
     (EILGGBOIMGE_FMFDKGKCBBG__NDNPGAKJLHM(HPACPFLKHPK,(MethodInfo *)0x0),
     PFDEAPMMFAP != (LEGDPJHPEOB_o *)0x0)) {
    method_00 = (MethodInfo *)HPACPFLKHPK;
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)PFDEAPMMFAP,(__this->fields).MHDJAEILAJL,HPACPFLKHPK,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    __this_02 = (MGJNNCKDJCP_o *)
                (*(HPACPFLKHPK->klass->vtable)._3_ToString.methodPtr)
                          (HPACPFLKHPK,(HPACPFLKHPK->klass->vtable)._3_ToString.method);
    LDAIPGBJEOG = MGJNNCKDJCP__EDAHAFNGECF(__this_02,(System_Xml_XmlNode_o *)__this_00,method_00);
    AMIINPEKKFB__NKGDNFCCFCD((System_String_o *)__this_02,LDAIPGBJEOG,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MNDFPLAFICI(XmlNode AHDGNOJPPIB, XmlNode KKEMAKPNJMA)  [RVA 0x35C37F8]
// MGJNNCKDJCP$$MNDFPLAFICI @ RVA 0x35C37F8

/* WARNING: Removing unreachable block (ram,0x036c3a28) */

void MGJNNCKDJCP__MNDFPLAFICI
               (MGJNNCKDJCP_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,
               System_Xml_XmlNode_o *KKEMAKPNJMA,MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  System_Xml_XmlNode_o *JOHFLOEABJL;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
                    /* try { // try from 036c3808 to 037c380f has its CatchHandler @ 036c3884 */
  if ((DAT_04568f57 & 1) == 0) {
                    /* try { // try from 036c381c to 037c382b has its CatchHandler @ 036c387c */
    FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* try { // try from 036c382c to 037c3873 has its CatchHandler @ 036c3760 */
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    __this = (MGJNNCKDJCP_o *)FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04568f57 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    plVar2 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
    __this = (MGJNNCKDJCP_o *)0x0;
    if (plVar2 != (long *)0x0) {
                    /* try { // try from 036c3874 to 037c3877 has its CatchHandler @ 036c3880 */
      plVar2 = (long *)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
                    /* try { // try from 036c3878 to 037c389b has its CatchHandler @ 036c3760 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c381c with catch @ 036c387c
                        */
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar4 = *plVar2;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* try { // try from 036c389c to 037c389f has its CatchHandler @ 036c38c8 */
        if (uVar5 != 0) {
                    /* try { // try from 036c38a0 to 037c38d7 has its CatchHandler @ 036c3760 */
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar6 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 036c38d8 to 037c38df has its CatchHandler @ 036c38f4 */
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_036c38dc;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
                    /* catch() { ... } // from try @ 036c389c with catch @ 036c38c8 */
        puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,0);
LAB_036c38dc:
                    /* try { // try from 036c38e0 to 037c38eb has its CatchHandler @ 036c3760 */
        uVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if ((uVar5 & 1) == 0) {
          plVar2 = (long *)thunk_FUN_01bda71c(plVar2,System_IDisposable_TypeInfo);
          if (plVar2 == (long *)0x0) {
            return;
          }
          lVar4 = *plVar2;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 == 0) goto LAB_036c39d8;
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_036c39c0;
        }
                    /* try { // try from 036c38ec to 037c38f3 has its CatchHandler @ 036c38f4 */
        lVar4 = *plVar2;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036c38d8 with catch @ 036c38f4
                       catch(type#2 @ 00000000) { ... } // from try @ 036c38ec with catch @ 036c38f4
                        */
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar6 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_036c393c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,1);
LAB_036c393c:
        JOHFLOEABJL = (System_Xml_XmlNode_o *)(*(code *)*puVar3)(plVar2,puVar3[1]);
        if (JOHFLOEABJL != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((JOHFLOEABJL->klass->_2).naturalAligment < bVar1) ||
             ((JOHFLOEABJL->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(JOHFLOEABJL);
          }
        }
        EIABCPKDEBD__DGPOFACHGMP(KKEMAKPNJMA,JOHFLOEABJL,(MethodInfo *)0x0);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_036c39c0:
    if (*(System_IDisposable_c **)(piVar6 + -2) == System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_036c39f4;
    }
  }
LAB_036c39d8:
  puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_IDisposable_TypeInfo,0);
LAB_036c39f4:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}


// ===== private void BIMCJEPIKFI(XmlNode AHDGNOJPPIB, KINHGEBKOEG DKMMBMBMJBO)  [RVA 0x35C4CAC]
// MGJNNCKDJCP$$BIMCJEPIKFI @ RVA 0x35C4CAC

/* WARNING: Removing unreachable block (ram,0x036c4f70) */

void MGJNNCKDJCP__BIMCJEPIKFI
               (MGJNNCKDJCP_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,KINHGEBKOEG_o *DKMMBMBMJBO,
               MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  Il2CppObject *key;
  Il2CppObject *value;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if ((DAT_04568f58 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_set_Item__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlAttribute_TypeInfo);
    __this = (MGJNNCKDJCP_o *)FUN_01bab630(&StringLiteral_11876/*"Set"*/);
    DAT_04568f58 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    plVar2 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                               (AHDGNOJPPIB,StringLiteral_11876/*"Set"*/,
                                (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    if (plVar2 == (long *)0x0) {
      return;
    }
    plVar2 = (long *)(**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
    __this = (MGJNNCKDJCP_o *)0x0;
    if (plVar2 != (long *)0x0) {
      plVar2 = (long *)(**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar5 = *plVar2;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_036c4dd8;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,0);
LAB_036c4dd8:
        uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if ((uVar6 & 1) == 0) {
          plVar2 = (long *)thunk_FUN_01bda71c(plVar2,System_IDisposable_TypeInfo);
          if (plVar2 == (long *)0x0) {
            return;
          }
          lVar5 = *plVar2;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 == 0) goto LAB_036c4f08;
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_036c4ef0;
        }
        lVar5 = *plVar2;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_036c4e38;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,1);
LAB_036c4e38:
        plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
        if (plVar4 == (long *)0x0) {
          if (DKMMBMBMJBO != (KINHGEBKOEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
LAB_036c4f60:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlAttribute_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
           (*(System_Xml_XmlAttribute_c **)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlAttribute_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(plVar4);
        }
        if (DKMMBMBMJBO == (KINHGEBKOEG_o *)0x0) goto LAB_036c4f60;
        __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (DKMMBMBMJBO->fields).JPNMMLFPECM;
        key = (Il2CppObject *)
              (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
        value = (Il2CppObject *)
                (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
        if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_Dictionary<object,_object>__set_Item
                  (__this_00,key,value,
                   Method_System_Collections_Generic_Dictionary<string,_string>_set_Item__);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_036c4ef0:
    if (*(System_IDisposable_c **)(piVar7 + -2) == System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_036c4f24;
    }
  }
LAB_036c4f08:
  puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_IDisposable_TypeInfo,0);
LAB_036c4f24:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}


// ===== private HEFOANCOHDC KGOJHBCOGBA(string KGLJICLJHEL)  [RVA 0x35C5044]
// MGJNNCKDJCP$$KGOJHBCOGBA @ RVA 0x35C5044

HEFOANCOHDC_o *
MGJNNCKDJCP__KGOJHBCOGBA(MGJNNCKDJCP_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  FOKJBDHLIMG_o *pFVar1;
  HEFOANCOHDC_o *pHVar2;
  
  if ((DAT_04568f59 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568f59 = 1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pFVar1 = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
  if (pFVar1 != (FOKJBDHLIMG_o *)0x0) {
    pHVar2 = FOKJBDHLIMG__PKLOILCMALN(pFVar1,KGLJICLJHEL,(MethodInfo *)0x0);
    if (pHVar2 != (HEFOANCOHDC_o *)0x0) {
      return pHVar2;
    }
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar1 = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
    if (pFVar1 != (FOKJBDHLIMG_o *)0x0) {
      pHVar2 = FOKJBDHLIMG__OPHCGMGNFFO(pFVar1,KGLJICLJHEL,-1,(MethodInfo *)0x0);
      if (pHVar2 != (HEFOANCOHDC_o *)0x0) {
        return pHVar2;
      }
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pFVar1 = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
      if (pFVar1 != (FOKJBDHLIMG_o *)0x0) {
        pHVar2 = FOKJBDHLIMG__JMMDGEOBMOC(pFVar1,KGLJICLJHEL,(MethodInfo *)0x0);
        return pHVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x35C5120]
// MGJNNCKDJCP$$MAHFCKJGBPP @ RVA 0x35C5120

void MGJNNCKDJCP__MAHFCKJGBPP(MGJNNCKDJCP_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_00;
  LEGDPJHPEOB_o *__this_01;
  PKHMIGFEJCL_o **ppPVar2;
  System_String_o *a;
  MethodInfo *method_00;
  
  if ((DAT_04568f5a & 1) == 0) {
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&LEGDPJHPEOB_TypeInfo);
    FUN_01bab630(&StringLiteral_8095/*"Item"*/);
    FUN_01bab630(&StringLiteral_10305/*"Player"*/);
    DAT_04568f5a = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  __this_00 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
  EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (LEGDPJHPEOB_o *)thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
  LEGDPJHPEOB___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (LEGDPJHPEOB_o *)0x0) {
    ppPVar2 = &(__this_01->fields).AAJBIMFNMBB;
    *ppPVar2 = AAJBIMFNMBB;
    thunk_FUN_01c20e04(ppPVar2,AAJBIMFNMBB);
    if (__this_00 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
      EILGGBOIMGE_FMFDKGKCBBG__NDNPGAKJLHM(__this_00,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      EILGGBOIMGE__KFMNMGGDHFD
                ((EILGGBOIMGE_o *)__this_01,(__this->fields).IDNBELKLCEL,__this_00,false,
                 (System_String_o *)0x0,(MethodInfo *)0x0);
      a = (System_String_o *)
          (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      bVar1 = System_String__op_Equality(a,StringLiteral_10305/*"Player"*/,(MethodInfo *)0x0);
      if (bVar1) {
        MGJNNCKDJCP__GPNMPFADPOJ(__this,__this_00,__this_01,method_00);
      }
      else {
        bVar1 = System_String__op_Equality(a,StringLiteral_8095/*"Item"*/,(MethodInfo *)0x0);
        if (bVar1) {
          MGJNNCKDJCP__EPGONHLDJFD(__this,__this_00,__this_01,method_00);
        }
      }
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OMENLOHIJIC(XmlNode AHDGNOJPPIB, EILGGBOIMGE.FMFDKGKCBBG HPACPFLKHPK, LEGDPJHPEOB PFDEAPMMFAP)  [RVA 0x35C3AEC]
// MGJNNCKDJCP$$OMENLOHIJIC @ RVA 0x35C3AEC

/* WARNING: Removing unreachable block (ram,0x036c4058) */
/* WARNING: Removing unreachable block (ram,0x036c4048) */
/* WARNING: Removing unreachable block (ram,0x036c3e98) */

void MGJNNCKDJCP__OMENLOHIJIC
               (MGJNNCKDJCP_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,
               EILGGBOIMGE_FMFDKGKCBBG_o *HPACPFLKHPK,LEGDPJHPEOB_o *PFDEAPMMFAP,MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  long *plVar4;
  long *plVar5;
  System_String_o *CJNHFNHJHPE;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_04568f5b & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlAttribute_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04568f5b = 1;
  }
  if ((AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) ||
     (plVar2 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar2 = (long *)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_036c3ba0:
  lVar7 = *plVar2;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
          System_Collections_IEnumerator_TypeInfo) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_036c3bec;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,0);
LAB_036c3bec:
  uVar8 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  if ((uVar8 & 1) != 0) {
    lVar7 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_036c3c4c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,1);
LAB_036c3c4c:
    AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (AHDGNOJPPIB_00 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
       ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(AHDGNOJPPIB_00);
    }
    plVar4 = (long *)(*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB_00,
                                (AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_036c3d0c;
          }
          uVar8 = uVar8 - 1;
                    /* try { // try from 036c3ce8 to 037c3dc3 has its CatchHandler @ 036c3ce8
                       catch() { ... } // from try @ 036c3ce8 with catch @ 036c3ce8
                       catch() { ... } // from try @ 036c3e0c with catch @ 036c3ce8
                       catch() { ... } // from try @ 036c3e84 with catch @ 036c3ce8
                       catch() { ... } // from try @ 036c3eb4 with catch @ 036c3ce8
                       catch() { ... } // from try @ 036c3ef4 with catch @ 036c3ce8 */
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_036c3d0c:
      uVar8 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      if ((uVar8 & 1) == 0) goto LAB_036c3e18;
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_036c3d6c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_036c3d6c:
      plVar5 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
      if (plVar5 != (long *)0x0) {
        bVar1 = (System_Xml_XmlAttribute_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
           (*(System_Xml_XmlAttribute_c **)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlAttribute_TypeInfo)) {
                    /* try { // try from 036c3eb4 to 037c3eeb has its CatchHandler @ 036c3ce8 */
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(plVar5);
        }
      }
      if (HPACPFLKHPK == (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      EILGGBOIMGE_FMFDKGKCBBG__NDNPGAKJLHM(HPACPFLKHPK,(MethodInfo *)0x0);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 036c3dc4 to 037c3dcb has its CatchHandler @ 036c3e98 */
      CJNHFNHJHPE = (System_String_o *)
                    (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
      if (PFDEAPMMFAP == (LEGDPJHPEOB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 036c3de0 to 037c3de3 has its CatchHandler @ 036c3e88 */
                    /* try { // try from 036c3de4 to 037c3df3 has its CatchHandler @ 036c3e94 */
      method = (MethodInfo *)0x0;
      EILGGBOIMGE__KFMNMGGDHFD
                ((EILGGBOIMGE_o *)PFDEAPMMFAP,CJNHFNHJHPE,HPACPFLKHPK,false,(System_String_o *)0x0,
                 (MethodInfo *)0x0);
                    /* try { // try from 036c3dfc to 037c3e0b has its CatchHandler @ 036c3e90 */
      uVar6 = (*(HPACPFLKHPK->klass->vtable)._3_ToString.methodPtr)
                        (HPACPFLKHPK,(HPACPFLKHPK->klass->vtable)._3_ToString.method);
                    /* try { // try from 036c3e0c to 037c3e7f has its CatchHandler @ 036c3ce8 */
      (**(code **)(*plVar5 + 0x1d8))(plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x1e0));
    } while( true );
  }
  plVar2 = (long *)thunk_FUN_01bda71c(plVar2,System_IDisposable_TypeInfo);
  if (plVar2 == (long *)0x0) {
    return;
  }
  lVar7 = *plVar2;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 == 0) goto LAB_036c3f70;
  piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
  goto LAB_036c3f58;
LAB_036c3e18:
  plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_036c3e80;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_036c3e80:
                    /* try { // try from 036c3e80 to 037c3e83 has its CatchHandler @ 036c3e8c */
                    /* try { // try from 036c3e84 to 037c3eaf has its CatchHandler @ 036c3ce8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c3de0 with catch @ 036c3e88
                        */
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c3e80 with catch @ 036c3e8c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c3dfc with catch @ 036c3e90
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c3de4 with catch @ 036c3e94
                        */
  MGJNNCKDJCP__OMENLOHIJIC(__this,AHDGNOJPPIB_00,HPACPFLKHPK,PFDEAPMMFAP,method);
                    /* try { // try from 036c3eb0 to 037c3eb3 has its CatchHandler @ 036c3edc */
  goto LAB_036c3ba0;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_036c3f58:
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_036c3f8c;
    }
  }
LAB_036c3f70:
  puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_IDisposable_TypeInfo,0);
LAB_036c3f8c:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}


// ===== private void OPANNCEJFML(XmlNode AHDGNOJPPIB)  [RVA 0x35C4148]
// MGJNNCKDJCP$$OPANNCEJFML @ RVA 0x35C4148

/* WARNING: Removing unreachable block (ram,0x036c454c) */

void MGJNNCKDJCP__OPANNCEJFML
               (MGJNNCKDJCP_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  int32_t iVar2;
  uint uVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  System_Xml_XmlAttributeCollection_o *pSVar6;
  System_Xml_XmlAttribute_o *pSVar7;
  System_String_o *KGLJICLJHEL;
  HEFOANCOHDC_o *pHVar8;
  KINHGEBKOEG_o *__this_00;
  System_String_o **ppSVar9;
  MGJNNCKDJCP_o *__this_01;
  NFGLEDADCGL_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  long lVar10;
  ACHLOMELAJE_o *pAVar11;
  ulong uVar12;
  int *piVar13;
  
  if ((DAT_04568f5c & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&KINHGEBKOEG_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_8409/*"Level"*/);
    FUN_01bab630(&StringLiteral_14589/*"UpgradeLevel"*/);
    __this = (MGJNNCKDJCP_o *)FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568f5c = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    plVar4 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
    __this = (MGJNNCKDJCP_o *)0x0;
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar10 = *plVar4;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_036c4288;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_036c4288:
        uVar12 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar12 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar10 = *plVar4;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 == 0) goto LAB_036c44d8;
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_036c44c0;
        }
        lVar10 = *plVar4;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_036c42e8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_036c42e8:
        AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (AHDGNOJPPIB_00 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
           ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(AHDGNOJPPIB_00);
        }
        pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB_00,(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method
                           );
        if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar6,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        KGLJICLJHEL = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB_00,(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method
                           );
        if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar6,StringLiteral_8409/*"Level"*/,(MethodInfo *)0x0);
        iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar7,0,(MethodInfo *)0x0);
        pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB_00,(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method
                           );
        if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar6,StringLiteral_14589/*"UpgradeLevel"*/,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)0x0;
        uVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar7,0,(MethodInfo *)0x0);
        pHVar8 = MGJNNCKDJCP__KGOJHBCOGBA((MGJNNCKDJCP_o *)(ulong)uVar3,KGLJICLJHEL,method_00);
        if (pHVar8 != (HEFOANCOHDC_o *)0x0) {
          __this_00 = (KINHGEBKOEG_o *)thunk_FUN_01bda818(KINHGEBKOEG_TypeInfo);
          KINHGEBKOEG___ctor(__this_00,(MethodInfo *)0x0);
          if (__this_00 == (KINHGEBKOEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          ppSVar9 = &(__this_00->fields).JIJLBFGKNJK;
          *ppSVar9 = KGLJICLJHEL;
          __this_01 = (MGJNNCKDJCP_o *)thunk_FUN_01c20e04(ppSVar9,KGLJICLJHEL);
          (__this_00->fields).NOPGBJNLFHM = iVar2;
          (__this_00->fields).AEIJFFBOBCP = uVar3;
          MGJNNCKDJCP__BIMCJEPIKFI(__this_01,AHDGNOJPPIB_00,__this_00,in_x3);
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar11 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (pAVar11 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          __this_02 = (pAVar11->fields).CKJAGLDEMAE;
          if (__this_02 == (NFGLEDADCGL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          NFGLEDADCGL__DMCFMJJKIDN(__this_02,__this_00,(MethodInfo *)0x0);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_036c44c0:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_036c44f4;
    }
  }
LAB_036c44d8:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_036c44f4:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

