// FKAKHBPABPA$$DLGNAEJNNKI @ RVA 0x34CEEAC

void FKAKHBPABPA__DLGNAEJNNKI(FKAKHBPABPA_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KIMBEBLJJPN__o *pSVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  int index;
  int index_00;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((DAT_045686a4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Item__);
    DAT_045686a4 = 1;
  }
  pSVar1 = (__this->fields).OKAINPMIKKD;
  if (pSVar1 != (System_Collections_Generic_List_KIMBEBLJJPN__o *)0x0) {
    index_00 = 0;
    do {
      if ((pSVar1->fields)._size <= index_00) {
                    /* try { // try from 035cf1a0 to 036cf383 has its CatchHandler @ 035cf1a0
                       catch() { ... } // from try @ 035cf1a0 with catch @ 035cf1a0
                       catch() { ... } // from try @ 035cf5a8 with catch @ 035cf1a0
                       catch() { ... } // from try @ 035cf618 with catch @ 035cf1a0
                       catch() { ... } // from try @ 035cf6ac with catch @ 035cf1a0
                       catch() { ... } // from try @ 035cf6ec with catch @ 035cf1a0 */
        return;
      }
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index_00,
                          Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Item__);
      if ((pIVar2 == (Il2CppObject *)0x0) ||
         (pSVar1 = (__this->fields).OKAINPMIKKD,
         pSVar1 == (System_Collections_Generic_List_KIMBEBLJJPN__o *)0x0)) break;
      fVar4 = *(float *)((long)&pIVar2[1].klass + 4);
      if (index_00 == (pSVar1->fields)._size + -1) {
        index = 0;
      }
      else {
        index = index_00 + 1;
      }
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index,
                          Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Item__);
      if ((pIVar2 == (Il2CppObject *)0x0) ||
         (pSVar1 = (__this->fields).OKAINPMIKKD,
         pSVar1 == (System_Collections_Generic_List_KIMBEBLJJPN__o *)0x0)) break;
      fVar5 = *(float *)((long)&pIVar2[1].klass + 4);
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index_00,
                          Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Item__);
      if ((pIVar2 == (Il2CppObject *)0x0) ||
         (pSVar1 = (__this->fields).OKAINPMIKKD,
         pSVar1 == (System_Collections_Generic_List_KIMBEBLJJPN__o *)0x0)) break;
      fVar6 = *(float *)&pIVar2[1].klass;
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index_00,
                          Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Item__);
      if (fVar6 == 0.0) {
        pSVar1 = (__this->fields).OKAINPMIKKD;
        if (((pSVar1 != (System_Collections_Generic_List_KIMBEBLJJPN__o *)0x0) &&
            (pIVar3 = System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar1,index_00,
                                 Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Item__),
            pIVar3 != (Il2CppObject *)0x0)) &&
           (*(undefined4 *)&pIVar3[2].klass = 0, pIVar2 != (Il2CppObject *)0x0)) {
          *(undefined4 *)((long)&pIVar2[1].monitor + 4) = 0;
          return;
        }
        break;
      }
      if ((pIVar2 == (Il2CppObject *)0x0) ||
         (pSVar1 = (__this->fields).OKAINPMIKKD,
         pSVar1 == (System_Collections_Generic_List_KIMBEBLJJPN__o *)0x0)) break;
      fVar6 = *(float *)&pIVar2[1].monitor;
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index_00,
                          Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Item__);
      pSVar1 = (__this->fields).OKAINPMIKKD;
      if ((pSVar1 == (System_Collections_Generic_List_KIMBEBLJJPN__o *)0x0) ||
         (pIVar3 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar1,index_00,
                              Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Item__),
         pIVar3 == (Il2CppObject *)0x0)) break;
      if (fVar6 == 0.0) {
        if (pIVar2 == (Il2CppObject *)0x0) break;
        *(float *)((long)&pIVar2[1].monitor + 4) = (fVar5 - fVar4) / *(float *)&pIVar3[1].klass;
        pSVar1 = (__this->fields).OKAINPMIKKD;
        if ((pSVar1 == (System_Collections_Generic_List_KIMBEBLJJPN__o *)0x0) ||
           (pIVar2 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar1,index_00,
                                Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Item__),
           pIVar2 == (Il2CppObject *)0x0)) break;
      }
      else {
        pSVar1 = (__this->fields).OKAINPMIKKD;
        if (pSVar1 == (System_Collections_Generic_List_KIMBEBLJJPN__o *)0x0) break;
        fVar6 = *(float *)&pIVar3[1].monitor;
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,index_00,
                            Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Item__);
        if ((pIVar3 == (Il2CppObject *)0x0) ||
           (pSVar1 = (__this->fields).OKAINPMIKKD,
           pSVar1 == (System_Collections_Generic_List_KIMBEBLJJPN__o *)0x0)) break;
        fVar7 = *(float *)&pIVar3[1].klass;
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,index_00,
                            Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Item__);
        if ((pIVar3 == (Il2CppObject *)0x0) ||
           (pSVar1 = (__this->fields).OKAINPMIKKD,
           pSVar1 == (System_Collections_Generic_List_KIMBEBLJJPN__o *)0x0)) break;
        fVar8 = *(float *)&pIVar3[1].klass;
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,index_00,
                            Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Item__);
        if ((pIVar3 == (Il2CppObject *)0x0) ||
           (pSVar1 = (__this->fields).OKAINPMIKKD,
           pSVar1 == (System_Collections_Generic_List_KIMBEBLJJPN__o *)0x0)) break;
        fVar9 = *(float *)&pIVar3[1].monitor;
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,index_00,
                            Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Item__);
        if ((pIVar3 == (Il2CppObject *)0x0) || (pIVar2 == (Il2CppObject *)0x0)) break;
        *(float *)((long)&pIVar2[1].monitor + 4) =
             ((fVar5 - fVar4) - fVar6 * fVar7 * fVar8) /
             ((fVar9 + fVar9) * *(float *)&pIVar3[1].klass);
        pSVar1 = (__this->fields).OKAINPMIKKD;
        if (pSVar1 == (System_Collections_Generic_List_KIMBEBLJJPN__o *)0x0) break;
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,index_00,
                            Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Item__);
        pSVar1 = (__this->fields).OKAINPMIKKD;
        if (((pSVar1 == (System_Collections_Generic_List_KIMBEBLJJPN__o *)0x0) ||
            (pIVar3 = System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar1,index_00,
                                 Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Item__),
            pIVar3 == (Il2CppObject *)0x0)) ||
           (pSVar1 = (__this->fields).OKAINPMIKKD,
           pSVar1 == (System_Collections_Generic_List_KIMBEBLJJPN__o *)0x0)) break;
        fVar5 = *(float *)&pIVar3[1].monitor;
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,index_00,
                            Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Item__);
        if ((pIVar3 == (Il2CppObject *)0x0) ||
           (pSVar1 = (__this->fields).OKAINPMIKKD,
           pSVar1 == (System_Collections_Generic_List_KIMBEBLJJPN__o *)0x0)) break;
        fVar6 = *(float *)((long)&pIVar3[1].monitor + 4);
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,index_00,
                            Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Item__);
        if ((pIVar3 == (Il2CppObject *)0x0) || (pIVar2 == (Il2CppObject *)0x0)) break;
        fVar4 = fVar4 - fVar5 * fVar6 * *(float *)((long)&pIVar3[1].monitor + 4);
      }
      *(float *)&pIVar2[2].klass = fVar4;
      pSVar1 = (__this->fields).OKAINPMIKKD;
      index_00 = index_00 + 1;
    } while (pSVar1 != (System_Collections_Generic_List_KIMBEBLJJPN__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

