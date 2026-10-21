// FKAKHBPABPA$$JEFMDBBCIOB @ RVA 0x34CF1F8

bool FKAKHBPABPA__JEFMDBBCIOB(FKAKHBPABPA_o *__this,float PJHOLDOLLCN,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_KIMBEBLJJPN__o *pSVar3;
  Il2CppObject *pIVar4;
  int32_t index;
  MethodInfo *extraout_x1;
  float fVar5;
  
  if ((DAT_045686a2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Item__);
    DAT_045686a2 = 1;
    method = extraout_x1;
  }
  if (0.0 <= PJHOLDOLLCN) {
    bVar2 = FKAKHBPABPA__POFDNNBNINH(__this,method);
    fVar5 = (__this->fields).FCJOFAGHPON + PJHOLDOLLCN;
    (__this->fields).FCJOFAGHPON = fVar5;
    if (bVar2) {
      pSVar3 = (__this->fields).OKAINPMIKKD;
      if (pSVar3 != (System_Collections_Generic_List_KIMBEBLJJPN__o *)0x0) {
        index = (__this->fields).PJFJKFHIDDI;
        while (pIVar4 = System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                   Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Item__),
              pIVar4 != (Il2CppObject *)0x0) {
          if (fVar5 <= *(float *)&pIVar4[1].klass) goto LAB_035cf318;
          pSVar3 = (__this->fields).OKAINPMIKKD;
          if (pSVar3 == (System_Collections_Generic_List_KIMBEBLJJPN__o *)0x0) break;
          fVar5 = (__this->fields).FCJOFAGHPON;
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,
                              (__this->fields).PJFJKFHIDDI,
                              Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Item__);
          if (pIVar4 == (Il2CppObject *)0x0) break;
          if (*(float *)&pIVar4[1].klass < fVar5) {
            pSVar3 = (__this->fields).OKAINPMIKKD;
            if (pSVar3 == (System_Collections_Generic_List_KIMBEBLJJPN__o *)0x0) break;
            fVar5 = (__this->fields).FCJOFAGHPON;
            pIVar4 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar3,
                                (__this->fields).PJFJKFHIDDI,
                                Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Item__);
            if (pIVar4 == (Il2CppObject *)0x0) break;
            (__this->fields).FCJOFAGHPON = fVar5 - *(float *)&pIVar4[1].klass;
            (__this->fields).PJFJKFHIDDI = (__this->fields).PJFJKFHIDDI + 1;
          }
          pSVar3 = (__this->fields).OKAINPMIKKD;
          if (pSVar3 == (System_Collections_Generic_List_KIMBEBLJJPN__o *)0x0) break;
          index = (__this->fields).PJFJKFHIDDI;
          iVar1 = (pSVar3->fields)._size;
          if ((iVar1 <= index) && (0 < iVar1)) {
            index = 0;
            (__this->fields).PJFJKFHIDDI = 0;
          }
          fVar5 = (__this->fields).FCJOFAGHPON;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
LAB_035cf318:
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

