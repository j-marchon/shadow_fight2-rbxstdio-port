// Nekki.SF2.GUI.StrikeThroughTextLine$$Clear @ RVA 0x3270EC0

void Nekki_SF2_GUI_StrikeThroughTextLine__Clear
               (Nekki_SF2_GUI_StrikeThroughTextLine_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int iVar2;
  System_Collections_Generic_List_StrikeThroughTextLine_NLGMBKIAOPD__o *pSVar3;
  UnityEngine_Vector3_array *pUVar4;
  
  if ((DAT_0456722f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_Clear__)
    ;
    DAT_0456722f = 1;
  }
  pSVar3 = (__this->fields)._KHPCAICPJCK_k__BackingField;
  if (pSVar3 != (System_Collections_Generic_List_StrikeThroughTextLine_NLGMBKIAOPD__o *)0x0) {
    iVar1 = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pUVar4 = (__this->fields).super.m_Corners;
    if (pUVar4 != (UnityEngine_Vector3_array *)0x0) {
      iVar1 = (int32_t)pUVar4->max_length;
      iVar2 = *(int *)((long)&pUVar4->max_length + 4);
      *(undefined4 *)&pUVar4->max_length = 0;
      *(int *)((long)&pUVar4->max_length + 4) = iVar2 + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)pUVar4->bounds,0,iVar1,(MethodInfo *)0x0);
      }
      *(undefined1 *)&(__this->fields)._IAGANEPIJNF_k__BackingField = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

