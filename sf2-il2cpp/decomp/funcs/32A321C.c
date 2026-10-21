// IGJEEGBBNFC$$NKLGCNHLBAF @ RVA 0x32A321C

void IGJEEGBBNFC__NKLGCNHLBAF(IGJEEGBBNFC_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *pSVar1;
  MethodInfo *in_x2;
  
  if ((DAT_045673d4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_get_Count__);
    DAT_045673d4 = 1;
  }
  pSVar1 = (__this->fields).FNEKKIBOEKE;
  if (pSVar1 != (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0) {
    if (0 < (pSVar1->fields)._size) {
      IGJEEGBBNFC__IKDPMKOIDMP(__this,pSVar1,in_x2);
      pSVar1 = (__this->fields).FNEKKIBOEKE;
      if (pSVar1 == (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0)
      goto LAB_033a32b0;
      length = (pSVar1->fields)._size;
      (pSVar1->fields)._size = 0;
      (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
LAB_033a32b0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

