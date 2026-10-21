// KBFGKFAKGPP$$KEMEFBDNPCK @ RVA 0x32EF0AC

void KBFGKFAKGPP__KEMEFBDNPCK(KBFGKFAKGPP_o *__this,GLCAPECMBLM_o *AHCMAIOOIKM,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_GLCAPECMBLM__o *__this_00;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  GLCAPECMBLM_array *pGVar4;
  
                    /* try { // try from 033ef0ac to 034ef0c3 has its CatchHandler @ 033ef19c */
                    /* try { // try from 033ef0c4 to 034ef18b has its CatchHandler @ 033ef014 */
  if ((DAT_04567660 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_Add__);
    DAT_04567660 = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<GLCAPECMBLM>_Add__;
  __this_00 = (__this->fields).FIFCACFAFPH;
  if (__this_00 != (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0) {
    pGVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pGVar4 != (GLCAPECMBLM_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pGVar4->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pGVar4->m_Items[(int)uVar1] = AHCMAIOOIKM;
        thunk_FUN_01c20e04(pGVar4->m_Items + (int)uVar1,AHCMAIOOIKM);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (Il2CppObject *)AHCMAIOOIKM,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      if ((AHCMAIOOIKM != (GLCAPECMBLM_o *)0x0) &&
         (pUVar3 = (AHCMAIOOIKM->fields).PBDIPLHDHHD, pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        __this_01 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
        pUVar3 = (__this->fields).LDAKOINICNJ;
        if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
           (parent = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0),
           __this_01 != (UnityEngine_Transform_o *)0x0)) {
                    /* try { // try from 033ef18c to 034ef19b has its CatchHandler @ 033ef19c */
          UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

