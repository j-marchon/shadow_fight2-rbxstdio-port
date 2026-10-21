// FKAKHBPABPA$$HECFKGPGKPF @ RVA 0x34CF330

float FKAKHBPABPA__HECFKGPGKPF(FKAKHBPABPA_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KIMBEBLJJPN__o *pSVar1;
  Il2CppObject *pIVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_045686a3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Item__);
    DAT_045686a3 = 1;
  }
  pSVar1 = (__this->fields).OKAINPMIKKD;
  if (pSVar1 != (System_Collections_Generic_List_KIMBEBLJJPN__o *)0x0) {
    if ((pSVar1->fields)._size == 0) {
                    /* try { // try from 035cf454 to 036cf47b has its CatchHandler @ 035cf680 */
      return 0.0;
    }
                    /* try { // try from 035cf384 to 036cf38b has its CatchHandler @ 035cf674 */
    pIVar2 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,
                        (__this->fields).PJFJKFHIDDI,
                        Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Item__);
                    /* try { // try from 035cf3a0 to 036cf3a7 has its CatchHandler @ 035cf668 */
    if ((pIVar2 != (Il2CppObject *)0x0) &&
       (pSVar1 = (__this->fields).OKAINPMIKKD,
       pSVar1 != (System_Collections_Generic_List_KIMBEBLJJPN__o *)0x0)) {
      fVar3 = *(float *)&pIVar2[1].monitor;
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,
                          (__this->fields).PJFJKFHIDDI,
                          Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Item__);
                    /* try { // try from 035cf3b4 to 036cf3db has its CatchHandler @ 035cf690 */
      if (pIVar2 != (Il2CppObject *)0x0) {
        if (fVar3 == 0.0) {
          fVar3 = *(float *)((long)&pIVar2[1].monitor + 4) * (__this->fields).FCJOFAGHPON;
        }
        else {
          pSVar1 = (__this->fields).OKAINPMIKKD;
          if (pSVar1 == (System_Collections_Generic_List_KIMBEBLJJPN__o *)0x0) goto LAB_035cf468;
                    /* try { // try from 035cf3e0 to 036cf3e7 has its CatchHandler @ 035cf66c */
          fVar3 = *(float *)&pIVar2[1].monitor;
          fVar4 = (__this->fields).FCJOFAGHPON;
          pIVar2 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar1,
                              (__this->fields).PJFJKFHIDDI,
                              Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Item__);
                    /* try { // try from 035cf3f8 to 036cf3ff has its CatchHandler @ 035cf658 */
                    /* try { // try from 035cf404 to 036cf40b has its CatchHandler @ 035cf65c */
          if ((pIVar2 == (Il2CppObject *)0x0) ||
             (pSVar1 = (__this->fields).OKAINPMIKKD,
             pSVar1 == (System_Collections_Generic_List_KIMBEBLJJPN__o *)0x0)) goto LAB_035cf468;
          fVar6 = *(float *)((long)&pIVar2[1].monitor + 4);
          fVar5 = (__this->fields).FCJOFAGHPON;
          pIVar2 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar1,
                              (__this->fields).PJFJKFHIDDI,
                              Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Item__);
                    /* try { // try from 035cf41c to 036cf423 has its CatchHandler @ 035cf664 */
          if (pIVar2 == (Il2CppObject *)0x0) goto LAB_035cf468;
                    /* try { // try from 035cf424 to 036cf44f has its CatchHandler @ 035cf684 */
          fVar3 = fVar3 * (fVar4 + fVar6) * (fVar5 + *(float *)((long)&pIVar2[1].monitor + 4));
        }
        pSVar1 = (__this->fields).OKAINPMIKKD;
        if ((pSVar1 != (System_Collections_Generic_List_KIMBEBLJJPN__o *)0x0) &&
           (pIVar2 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar1,
                                (__this->fields).PJFJKFHIDDI,
                                Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Item__),
           pIVar2 != (Il2CppObject *)0x0)) {
          return fVar3 + *(float *)&pIVar2[2].klass;
        }
      }
    }
  }
LAB_035cf468:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

