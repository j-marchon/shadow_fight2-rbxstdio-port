// TypeDefIndex 2253
// Namespace: 
// public class HHLPEJCDCBH
// Fields:
//   public int[] KIDEMGIBKHC; // 0x10
//   public Vector3[] GNIBJEOJOBO; // 0x18
//   private List<ModelNode> ECFOALIBLLO; // 0x20
//   private List<int> ECCEGMJMOBJ; // 0x28

// ===== public void BDHAMOEKNNK()  [RVA 0x32FD7A0]
// HHLPEJCDCBH$$BDHAMOEKNNK @ RVA 0x32FD7A0

void HHLPEJCDCBH__BDHAMOEKNNK(HHLPEJCDCBH_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  Il2CppObject *pIVar2;
  UnityEngine_Vector3_array *pUVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_045676ff & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_get_Item__);
                    /* try { // try from 033fd7cc to 034fd7d3 has its CatchHandler @ 033fd954 */
    DAT_045676ff = 1;
  }
  pUVar3 = (__this->fields).GNIBJEOJOBO;
  if (pUVar3 != (UnityEngine_Vector3_array *)0x0) {
                    /* try { // try from 033fd7d8 to 034fd7df has its CatchHandler @ 033fd958 */
    if (0 < (int)pUVar3->max_length) {
                    /* try { // try from 033fd7e4 to 034fd7ef has its CatchHandler @ 033fd94c */
      uVar4 = 0;
      lVar5 = 0;
      do {
        __this_00 = (__this->fields).ECFOALIBLLO;
                    /* try { // try from 033fd7fc to 034fd803 has its CatchHandler @ 033fd950 */
        if ((((__this_00 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) ||
             (pIVar2 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)__this_00,
                                  (int32_t)uVar4,
                                  Method_System_Collections_Generic_List<ModelNode>_get_Item__),
             pIVar2 == (Il2CppObject *)0x0)) ||
            (pUVar3 = (__this->fields).GNIBJEOJOBO, pUVar3 == (UnityEngine_Vector3_array *)0x0)) ||
           (pIVar2[3].monitor == (void *)0x0)) goto LAB_033fd858;
        uVar1 = (uint)pUVar3->max_length;
                    /* try { // try from 033fd820 to 034fd853 has its CatchHandler @ 033fd964 */
        if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        uVar6 = *(undefined8 *)((long)pIVar2[3].monitor + 0x10);
        uVar4 = uVar4 + 1;
        *(undefined4 *)((long)&pUVar3->m_Items[0].fields.z + lVar5) = 0;
        *(undefined8 *)((long)&pUVar3->m_Items[0].fields.x + lVar5) = uVar6;
        lVar5 = lVar5 + 0xc;
      } while ((long)uVar4 < (long)(int)uVar1);
    }
                    /* try { // try from 033fd854 to 034fd927 has its CatchHandler @ 033fd3c0 */
    return;
  }
LAB_033fd858:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private int CAAKLONNIGD(ModelNode JHMENEKPIBO)  [RVA 0x32FD860]
// HHLPEJCDCBH$$CAAKLONNIGD @ RVA 0x32FD860

int32_t HHLPEJCDCBH__CAAKLONNIGD
                  (HHLPEJCDCBH_o *__this,ModelNode_o *JHMENEKPIBO,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_IEFEBEDLHNN__o *pSVar5;
  ModelNode_array *pIVar6;
  
  if ((DAT_04567700 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_IndexOf__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_get_Count__);
    DAT_04567700 = 1;
  }
  pSVar5 = (__this->fields).ECFOALIBLLO;
  if (pSVar5 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
    bVar3 = System_Collections_Generic_List<object>__Contains
                      ((System_Collections_Generic_List_object__o *)pSVar5,
                       (Il2CppObject *)JHMENEKPIBO,
                       Method_System_Collections_Generic_List<ModelNode>_Contains__);
    lVar2 = Method_System_Collections_Generic_List<ModelNode>_Add__;
    pSVar5 = (__this->fields).ECFOALIBLLO;
    if (pSVar5 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
      if (bVar3) {
        iVar4 = System_Collections_Generic_List<object>__IndexOf
                          ((System_Collections_Generic_List_object__o *)pSVar5,
                           (Il2CppObject *)JHMENEKPIBO,
                           Method_System_Collections_Generic_List<ModelNode>_IndexOf__);
        return iVar4;
      }
      pIVar6 = (pSVar5->fields)._items;
      (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
      if (pIVar6 != (ModelNode_array *)0x0) {
        uVar1 = (pSVar5->fields)._size;
                    /* try { // try from 033fd928 to 034fd92f has its CatchHandler @ 033fd980 */
        if (uVar1 < (uint)pIVar6->max_length) {
                    /* try { // try from 033fd930 to 034fd933 has its CatchHandler @ 033fd970 */
                    /* try { // try from 033fd934 to 034fd937 has its CatchHandler @ 033fd95c */
          (pSVar5->fields)._size = uVar1 + 1;
                    /* try { // try from 033fd938 to 034fd93b has its CatchHandler @ 033fd3c0 */
          pIVar6->m_Items[(int)uVar1] = JHMENEKPIBO;
                    /* try { // try from 033fd93c to 034fd93f has its CatchHandler @ 033fd948 */
                    /* try { // try from 033fd940 to 034fd997 has its CatchHandler @ 033fd3c0 */
          thunk_FUN_01c20e04(pIVar6->m_Items + (int)uVar1,JHMENEKPIBO);
        }
        else {
                    /* catch() { ... } // from try @ 033fd93c with catch @ 033fd948 */
                    /* catch() { ... } // from try @ 033fd7e4 with catch @ 033fd94c */
                    /* catch() { ... } // from try @ 033fd7fc with catch @ 033fd950 */
                    /* catch() { ... } // from try @ 033fd7cc with catch @ 033fd954 */
                    /* catch() { ... } // from try @ 033fd7d8 with catch @ 033fd958 */
                    /* catch() { ... } // from try @ 033fd934 with catch @ 033fd95c */
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)JHMENEKPIBO
                     ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
                    /* catch() { ... } // from try @ 033fd784 with catch @ 033fd960 */
        pSVar5 = (__this->fields).ECFOALIBLLO;
                    /* catch() { ... } // from try @ 033fd820 with catch @ 033fd964 */
        if (pSVar5 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
                    /* catch() { ... } // from try @ 033fd778 with catch @ 033fd968 */
                    /* catch() { ... } // from try @ 033fd76c with catch @ 033fd96c */
                    /* catch() { ... } // from try @ 033fd930 with catch @ 033fd970 */
                    /* catch() { ... } // from try @ 033fd794 with catch @ 033fd974 */
                    /* catch() { ... } // from try @ 033fd704 with catch @ 033fd978 */
          return (pSVar5->fields)._size + -1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033fd6a8 with catch @ 033fd97c */
  FUN_01bab8c8();
}


// ===== public void ELFKPOFCCHF(ModelNode NFMPMCLABAC, ModelNode IFPALBKEPFA, ModelNode LILFDDNKIAD)  [RVA 0x32FD980]
// HHLPEJCDCBH$$ELFKPOFCCHF @ RVA 0x32FD980

void HHLPEJCDCBH__ELFKPOFCCHF
               (HHLPEJCDCBH_o *__this,ModelNode_o *NFMPMCLABAC,ModelNode_o *IFPALBKEPFA,
               ModelNode_o *LILFDDNKIAD,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  int32_t item;
  int32_t item_00;
  int32_t item_01;
  ModelNode_o *method_00;
  System_Collections_Generic_List_int__o *__this_00;
  System_Int32_array *pSVar3;
  
                    /* catch() { ... } // from try @ 033fd928 with catch @ 033fd980 */
                    /* try { // try from 033fd998 to 034fd99b has its CatchHandler @ 033fd9a8 */
  method_00 = IFPALBKEPFA;
  if ((DAT_04567701 & 1) == 0) {
                    /* catch() { ... } // from try @ 033fd998 with catch @ 033fd9a8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
                    /* try { // try from 033fd9b8 to 034fda1f has its CatchHandler @ 033fda34 */
    DAT_04567701 = 1;
  }
  item = HHLPEJCDCBH__CAAKLONNIGD(__this,NFMPMCLABAC,(MethodInfo *)method_00);
  item_00 = HHLPEJCDCBH__CAAKLONNIGD(__this,IFPALBKEPFA,(MethodInfo *)method_00);
  item_01 = HHLPEJCDCBH__CAAKLONNIGD(__this,LILFDDNKIAD,(MethodInfo *)method_00);
  lVar2 = Method_System_Collections_Generic_List<int>_Add__;
  __this_00 = (__this->fields).ECCEGMJMOBJ;
  if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Int32_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
                    /* try { // try from 033fda20 to 034fda2b has its CatchHandler @ 033fd3c0 */
      if (uVar1 < (uint)pSVar3->max_length) {
                    /* try { // try from 033fda2c to 034fda33 has its CatchHandler @ 033fda34 */
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = item;
                    /* catch() { ... } // from try @ 033fd9b8 with catch @ 033fda34
                       catch() { ... } // from try @ 033fda2c with catch @ 033fda34 */
      }
      else {
        System_Collections_Generic_List<int>__AddWithResize
                  (__this_00,item,
                   *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        __this_00 = (__this->fields).ECCEGMJMOBJ;
        if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_033fdb20;
      }
      lVar2 = Method_System_Collections_Generic_List<int>_Add__;
      pSVar3 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pSVar3 != (System_Int32_array *)0x0) {
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pSVar3->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pSVar3->m_Items[(int)uVar1] = item_00;
        }
        else {
          System_Collections_Generic_List<int>__AddWithResize
                    (__this_00,item_00,
                     *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          __this_00 = (__this->fields).ECCEGMJMOBJ;
          if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_033fdb20;
        }
        lVar2 = Method_System_Collections_Generic_List<int>_Add__;
        pSVar3 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pSVar3 != (System_Int32_array *)0x0) {
          uVar1 = (__this_00->fields)._size;
          if (uVar1 < (uint)pSVar3->max_length) {
            (__this_00->fields)._size = uVar1 + 1;
            pSVar3->m_Items[(int)uVar1] = item_01;
            return;
          }
          System_Collections_Generic_List<int>__AddWithResize
                    (__this_00,item_01,
                     *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
LAB_033fdb20:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32FDB24]
// HHLPEJCDCBH$$.ctor @ RVA 0x32FDB24

void HHLPEJCDCBH___ctor(HHLPEJCDCBH_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  System_Collections_Generic_List_IEFEBEDLHNN__o **ppSVar1;
  System_Collections_Generic_List_int__o *__this_01;
  System_Collections_Generic_List_int__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567702 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<ModelNode>_TypeInfo);
    DAT_04567702 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_IEFEBEDLHNN__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ModelNode>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ModelNode>__ctor__);
  ppSVar1 = &(__this->fields).ECFOALIBLLO;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
  System_Collections_Generic_List<int>___ctor
            (__this_01,Method_System_Collections_Generic_List<int>__ctor__);
  ppSVar2 = &(__this->fields).ECCEGMJMOBJ;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void GIENGNEGHPJ()  [RVA 0x32FDC00]
// HHLPEJCDCBH$$GIENGNEGHPJ @ RVA 0x32FDC00

void HHLPEJCDCBH__GIENGNEGHPJ(HHLPEJCDCBH_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *__this_00;
  System_Int32_array *pSVar1;
  UnityEngine_Vector3_array *pUVar2;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_IEFEBEDLHNN__o *pSVar3;
  UnityEngine_Vector3_array **ppUVar4;
  System_Collections_Generic_List_int__o **ppSVar5;
  undefined1 auVar6 [16];
  
  if ((DAT_04567703 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_ToArray__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_get_Count__);
    FUN_01bab630(&UnityEngine_Vector3___TypeInfo);
    DAT_04567703 = 1;
    method = extraout_x1;
  }
  ppSVar5 = &(__this->fields).ECCEGMJMOBJ;
  __this_00 = *ppSVar5;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = method;
  auVar6 = auVar6 << 0x40;
  if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
    pSVar1 = System_Collections_Generic_List<int>__ToArray
                       (__this_00,Method_System_Collections_Generic_List<int>_ToArray__);
    (__this->fields).KIDEMGIBKHC = pSVar1;
    auVar6 = thunk_FUN_01c20e04(&__this->fields,pSVar1);
    pSVar3 = (__this->fields).ECFOALIBLLO;
    if (pSVar3 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
      pUVar2 = (UnityEngine_Vector3_array *)
               FUN_01bab718(UnityEngine_Vector3___TypeInfo,(pSVar3->fields)._size);
      ppUVar4 = &(__this->fields).GNIBJEOJOBO;
      *ppUVar4 = pUVar2;
      thunk_FUN_01c20e04(ppUVar4,pUVar2);
      (__this->fields).ECCEGMJMOBJ = (System_Collections_Generic_List_int__o *)0x0;
      thunk_FUN_01c20e04(ppSVar5,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar6._0_8_,auVar6._8_8_);
}

