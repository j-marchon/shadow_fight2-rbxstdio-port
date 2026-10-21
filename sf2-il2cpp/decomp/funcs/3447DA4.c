// CGALNIOABHK$$FMNBNOCEAHE @ RVA 0x3447DA4

/* WARNING: Removing unreachable block (ram,0x03548148) */

void CGALNIOABHK__FMNBNOCEAHE
               (System_Xml_XmlNode_o *ELOCKFLGKNO,
               System_Collections_Generic_Dictionary_string__FCFGGKLDBFJ__o *PHOLAJOMLEL,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_Dictionary_string__XmlNode__o **ppSVar4;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  System_String_o *a;
  FCFGGKLDBFJ_o *__this;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_04568242 & 1) == 0) {
    FUN_01bab630(&CGALNIOABHK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_XmlNode>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_XmlNode>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_XmlNode>_TypeInfo);
    FUN_01bab630(&FCFGGKLDBFJ_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_12864);
    DAT_04568242 = 1;
  }
  if (PHOLAJOMLEL != (System_Collections_Generic_Dictionary_string__FCFGGKLDBFJ__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              ((System_Collections_Generic_Dictionary_object__object__o *)PHOLAJOMLEL,
               Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_Clear__);
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
             thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_XmlNode>_TypeInfo);
    System_Collections_Generic_Dictionary<object,_object>___ctor
              (pSVar3,Method_System_Collections_Generic_Dictionary<string,_XmlNode>__ctor__);
    if ((CGALNIOABHK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppSVar4 = &CGALNIOABHK_TypeInfo->static_fields->OJGHOJALHBK;
    *ppSVar4 = (System_Collections_Generic_Dictionary_string__XmlNode__o *)pSVar3;
    thunk_FUN_01c20e04(ppSVar4,pSVar3);
                    /* try { // try from 03547ec4 to 03647f9f has its CatchHandler @ 03547ec4
                       catch() { ... } // from try @ 03547ec4 with catch @ 03547ec4
                       catch() { ... } // from try @ 035480d0 with catch @ 03547ec4
                       catch() { ... } // from try @ 03548118 with catch @ 03547ec4
                       catch() { ... } // from try @ 03548168 with catch @ 03547ec4
                       catch() { ... } // from try @ 03548198 with catch @ 03547ec4 */
    if (ELOCKFLGKNO == (System_Xml_XmlNode_o *)0x0) {
      return;
    }
    plVar5 = (long *)(*(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (ELOCKFLGKNO,(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.method);
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03548100 with catch @ 03548144 */
        FUN_01bab8c8();
      }
      do {
        lVar7 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_03547f70;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_03547f70:
        uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar8 & 1) == 0) {
          plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
                    /* try { // try from 035480ac to 036480cf has its CatchHandler @ 03548124 */
          if (plVar5 == (long *)0x0) {
            return;
          }
          lVar7 = *plVar5;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 == 0) goto LAB_035480e4;
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_035480cc;
        }
        lVar7 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
                    /* try { // try from 03547fa0 to 03647fa7 has its CatchHandler @ 0354814c */
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_03547fd0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_03547fd0:
        AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03548108 with catch @ 03548134 */
          FUN_01bab8c8();
        }
                    /* try { // try from 03547fe8 to 03647ff3 has its CatchHandler @ 03548148 */
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
           ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* catch() { ... } // from try @ 0354804c with catch @ 0354812c */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0354810c with catch @ 03548130 */
          FUN_01babc64(AHDGNOJPPIB);
        }
                    /* try { // try from 03548014 to 0364801f has its CatchHandler @ 03548128 */
        a = (System_String_o *)
            (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                      (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
                    /* try { // try from 03548028 to 03648033 has its CatchHandler @ 0354811c */
        bVar2 = System_String__op_Equality(a,StringLiteral_12864,(MethodInfo *)0x0);
        if (bVar2) {
          __this = (FCFGGKLDBFJ_o *)thunk_FUN_01bda818(FCFGGKLDBFJ_TypeInfo);
                    /* try { // try from 0354803c to 03648047 has its CatchHandler @ 03548138 */
          FCFGGKLDBFJ___ctor(__this,AHDGNOJPPIB,(MethodInfo *)0x0);
          if (__this == (FCFGGKLDBFJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03548104 with catch @ 0354813c */
            FUN_01bab8c8();
          }
                    /* try { // try from 0354804c to 03648053 has its CatchHandler @ 0354812c */
          System_Collections_Generic_Dictionary<object,_object>__Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)PHOLAJOMLEL,
                     (Il2CppObject *)(__this->fields).NPFMOEOIEKM,(Il2CppObject *)__this,
                     Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_Add__);
                    /* try { // try from 03548060 to 0364806b has its CatchHandler @ 03548120 */
          if ((CGALNIOABHK_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                   CGALNIOABHK_TypeInfo->static_fields->OJGHOJALHBK;
          if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0354803c with catch @ 03548138 */
            FUN_01bab8c8();
          }
          System_Collections_Generic_Dictionary<object,_object>__Add
                    (pSVar3,(Il2CppObject *)(__this->fields).NPFMOEOIEKM,(Il2CppObject *)AHDGNOJPPIB
                     ,Method_System_Collections_Generic_Dictionary<string,_XmlNode>_Add__);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03548110 with catch @ 03548140 */
  FUN_01bab8c8();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_035480cc:
                    /* try { // try from 035480d0 to 036480ff has its CatchHandler @ 03547ec4 */
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03548100;
    }
  }
LAB_035480e4:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_03548100:
                    /* try { // try from 03548100 to 03648103 has its CatchHandler @ 03548144 */
                    /* try { // try from 03548104 to 03648107 has its CatchHandler @ 0354813c */
                    /* try { // try from 03548108 to 0364810b has its CatchHandler @ 03548134 */
  (*(code *)*puVar6)(plVar5,puVar6[1]);
                    /* try { // try from 03548110 to 03648117 has its CatchHandler @ 03548140 */
                    /* try { // try from 03548118 to 03648163 has its CatchHandler @ 03547ec4 */
                    /* catch() { ... } // from try @ 03548028 with catch @ 0354811c */
                    /* catch() { ... } // from try @ 03548060 with catch @ 03548120 */
                    /* catch() { ... } // from try @ 035480ac with catch @ 03548124 */
                    /* catch() { ... } // from try @ 03548014 with catch @ 03548128 */
  return;
}

