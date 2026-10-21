// MEHKKHFBNLM$$JHFPMMMPGGJ @ RVA 0x33922F0

void MEHKKHFBNLM__JHFPMMMPGGJ(MEHKKHFBNLM_o *__this,GMGALNFPLPA_o *DDGLJFLLACC,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_List_GMGALNFPLPA__o *__this_00;
  GMGALNFPLPA_array *pGVar6;
  UnityEngine_Object_o *x;
  
  if ((DAT_04567c2c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GMGALNFPLPA>_Add__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567c2c = 1;
  }
  if (DDGLJFLLACC != (GMGALNFPLPA_o *)0x0) {
    x = (UnityEngine_Object_o *)(DDGLJFLLACC->fields).OJJAMKDEMJJ;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      return;
    }
    pUVar4 = (DDGLJFLLACC->fields).OJJAMKDEMJJ;
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._KDDKJJLDFFO_k__BackingField;
      if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
         (parent = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0),
         pUVar5 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent(pUVar5,parent,false,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<GMGALNFPLPA>_Add__;
        __this_00 = (__this->fields).KPLKFOJFEMF;
        if (__this_00 != (System_Collections_Generic_List_GMGALNFPLPA__o *)0x0) {
          pGVar6 = (__this_00->fields)._items;
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (pGVar6 != (GMGALNFPLPA_array *)0x0) {
            uVar1 = (__this_00->fields)._size;
            if (uVar1 < (uint)pGVar6->max_length) {
              (__this_00->fields)._size = uVar1 + 1;
              pGVar6->m_Items[(int)uVar1] = DDGLJFLLACC;
              thunk_FUN_01c20e04(pGVar6->m_Items + (int)uVar1,DDGLJFLLACC);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,
                         (Il2CppObject *)DDGLJFLLACC,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pUVar4 = (DDGLJFLLACC->fields).OJJAMKDEMJJ;
            if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
              pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
              UnityEngine_TransformExtensions__SetLocalPositionZ
                        (pUVar5,(__this->fields).DDMDFBAPLHJ,(MethodInfo *)0x0);
              (__this->fields).DDMDFBAPLHJ = (__this->fields).DDMDFBAPLHJ + -0.01;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

