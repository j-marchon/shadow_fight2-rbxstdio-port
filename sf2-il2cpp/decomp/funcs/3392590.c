// MEHKKHFBNLM$$GFFDLGBPMHM @ RVA 0x3392590

void MEHKKHFBNLM__GFFDLGBPMHM(MEHKKHFBNLM_o *__this,GMGALNFPLPA_o *DKFEALCDDBI,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_Component_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_List_GMGALNFPLPA__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  GMGALNFPLPA_array *pGVar5;
  
  if ((DAT_04567c2f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GMGALNFPLPA>_Add__);
    DAT_04567c2f = 1;
  }
  if ((DKFEALCDDBI != (GMGALNFPLPA_o *)0x0) &&
     (pUVar3 = (UnityEngine_Component_o *)(DKFEALCDDBI->fields).HGMMHCMHINJ,
     pUVar3 != (UnityEngine_Component_o *)0x0)) {
    pUVar4 = UnityEngine_Component__get_transform(pUVar3,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._KDDKJJLDFFO_k__BackingField;
    if ((__this_01 != (UnityEngine_GameObject_o *)0x0) &&
       (parent = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(pUVar4,parent,false,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<GMGALNFPLPA>_Add__;
      __this_00 = (__this->fields).KPLKFOJFEMF;
      if (__this_00 != (System_Collections_Generic_List_GMGALNFPLPA__o *)0x0) {
        pGVar5 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pGVar5 != (GMGALNFPLPA_array *)0x0) {
          uVar1 = (__this_00->fields)._size;
          if (uVar1 < (uint)pGVar5->max_length) {
            (__this_00->fields)._size = uVar1 + 1;
            pGVar5->m_Items[(int)uVar1] = DKFEALCDDBI;
            thunk_FUN_01c20e04(pGVar5->m_Items + (int)uVar1,DKFEALCDDBI);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       (Il2CppObject *)DKFEALCDDBI,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          (__this->fields).DDMDFBAPLHJ = (__this->fields).DDMDFBAPLHJ + -0.049999997;
          pUVar3 = (UnityEngine_Component_o *)(DKFEALCDDBI->fields).HGMMHCMHINJ;
          if (pUVar3 != (UnityEngine_Component_o *)0x0) {
            pUVar4 = UnityEngine_Component__get_transform(pUVar3,(MethodInfo *)0x0);
            UnityEngine_TransformExtensions__SetLocalPositionZ
                      (pUVar4,(__this->fields).DDMDFBAPLHJ,(MethodInfo *)0x0);
            (__this->fields).DDMDFBAPLHJ = (__this->fields).DDMDFBAPLHJ + -0.049999997;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

