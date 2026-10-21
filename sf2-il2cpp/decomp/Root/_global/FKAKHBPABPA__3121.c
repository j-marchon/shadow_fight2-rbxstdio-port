// TypeDefIndex 3121
// Namespace: 
// public class FKAKHBPABPA
// Fields:
//   private List<KIMBEBLJJPN> OKAINPMIKKD; // 0x10
//   private float FCJOFAGHPON; // 0x18
//   private int PJFJKFHIDDI; // 0x1C

// ===== public bool KFAABFCCGHH(float AINBPAEDKKN, float CJNHFNHJHPE, float GAJONDLDKLI)  [RVA 0x34CED9C]
// FKAKHBPABPA$$KFAABFCCGHH @ RVA 0x34CED9C

bool FKAKHBPABPA__KFAABFCCGHH
               (FKAKHBPABPA_o *__this,float AINBPAEDKKN,float CJNHFNHJHPE,float GAJONDLDKLI,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  KIMBEBLJJPN_o *__this_00;
  System_Collections_Generic_List_KIMBEBLJJPN__o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  KIMBEBLJJPN_array *pKVar3;
  
  if ((DAT_045686a0 & 1) == 0) {
    FUN_01bab630(&KIMBEBLJJPN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KIMBEBLJJPN>_Add__);
    DAT_045686a0 = 1;
    method = extraout_x1;
  }
  if (0.0 <= AINBPAEDKKN) {
    __this_00 = (KIMBEBLJJPN_o *)thunk_FUN_01bda818(KIMBEBLJJPN_TypeInfo,method);
    KIMBEBLJJPN___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (KIMBEBLJJPN_o *)0x0) {
      (__this_00->fields).AINBPAEDKKN = AINBPAEDKKN;
      (__this_00->fields).CJNHFNHJHPE = CJNHFNHJHPE;
      (__this_00->fields).GAJONDLDKLI = GAJONDLDKLI;
      lVar2 = Method_System_Collections_Generic_List<KIMBEBLJJPN>_Add__;
      __this_01 = (__this->fields).OKAINPMIKKD;
      if (__this_01 != (System_Collections_Generic_List_KIMBEBLJJPN__o *)0x0) {
        pKVar3 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pKVar3 != (KIMBEBLJJPN_array *)0x0) {
          uVar1 = (__this_01->fields)._size;
          if (uVar1 < (uint)pKVar3->max_length) {
            (__this_01->fields)._size = uVar1 + 1;
            pKVar3->m_Items[(int)uVar1] = __this_00;
            thunk_FUN_01c20e04(pKVar3->m_Items + (int)uVar1,__this_00);
            method_00 = extraout_x1_00;
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,
                       (Il2CppObject *)__this_00,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            method_00 = extraout_x1_01;
          }
          FKAKHBPABPA__DLGNAEJNNKI(__this,method_00);
          goto LAB_035cee8c;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_035cee8c:
  return 0.0 <= AINBPAEDKKN;
}


// ===== public bool POFDNNBNINH()  [RVA 0x34CF1A8]
// FKAKHBPABPA$$POFDNNBNINH @ RVA 0x34CF1A8

bool FKAKHBPABPA__POFDNNBNINH(FKAKHBPABPA_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KIMBEBLJJPN__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_045686a1 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<KIMBEBLJJPN>_get_Count__);
    DAT_045686a1 = 1;
  }
  pSVar1 = (__this->fields).OKAINPMIKKD;
  if (pSVar1 != (System_Collections_Generic_List_KIMBEBLJJPN__o *)0x0) {
    return 0 < (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public bool JEFMDBBCIOB(float PJHOLDOLLCN)  [RVA 0x34CF1F8]
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


// ===== public float HECFKGPGKPF()  [RVA 0x34CF330]
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


// ===== private void DLGNAEJNNKI()  [RVA 0x34CEEAC]
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


// ===== public void .ctor()  [RVA 0x34CF46C]
// FKAKHBPABPA$$.ctor @ RVA 0x34CF46C

void FKAKHBPABPA___ctor(FKAKHBPABPA_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KIMBEBLJJPN__o *__this_00;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 035cf480 to 036cf487 has its CatchHandler @ 035cf64c */
  if ((DAT_045686a5 & 1) == 0) {
                    /* try { // try from 035cf498 to 036cf49f has its CatchHandler @ 035cf630 */
    FUN_01bab630(&Method_System_Collections_Generic_List<KIMBEBLJJPN>__ctor__);
                    /* try { // try from 035cf4a4 to 036cf4ab has its CatchHandler @ 035cf61c */
    FUN_01bab630(&System_Collections_Generic_List<KIMBEBLJJPN>_TypeInfo);
                    /* try { // try from 035cf4b4 to 036cf4bb has its CatchHandler @ 035cf644 */
    DAT_045686a5 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 035cf4bc to 036cf4e7 has its CatchHandler @ 035cf688 */
  __this_00 = (System_Collections_Generic_List_KIMBEBLJJPN__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<KIMBEBLJJPN>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<KIMBEBLJJPN>__ctor__);
  (__this->fields).OKAINPMIKKD = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

