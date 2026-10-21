// GPEHLCDLNDL.AKEOOKGDJDM$$CFABNCIJNCM @ RVA 0x3128224

bool GPEHLCDLNDL_AKEOOKGDJDM__CFABNCIJNCM
               (GPEHLCDLNDL_AKEOOKGDJDM_o *__this,Nekki_SF2_GUI_Tutorial_TutorialNode_o *p_node,
               MethodInfo *method)

{
  bool bVar1;
  System_String_array *pSVar2;
  
  if ((p_node != (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0) &&
     (pSVar2 = (__this->fields).ids, pSVar2 != (System_String_array *)0x0)) {
    if ((int)pSVar2->max_length != 0) {
      bVar1 = System_String__op_Equality((p_node->fields)._ID,pSVar2->m_Items[0],(MethodInfo *)0x0);
      return bVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

