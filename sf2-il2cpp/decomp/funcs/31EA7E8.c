// IGFJINHNIBB$$KGGGJNCEPLF @ RVA 0x31EA7E8

bool IGFJINHNIBB__KGGGJNCEPLF(IGFJINHNIBB_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_CELDGLHBCAM__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04566d91 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<CELDGLHBCAM>_get_Count__);
    DAT_04566d91 = 1;
  }
  pSVar1 = (__this->fields).CHAJPCCNGAI;
  if (pSVar1 != (System_Collections_Generic_List_CELDGLHBCAM__o *)0x0) {
                    /* try { // try from 032ea824 to 033ea82b has its CatchHandler @ 032eaa24 */
    return (pSVar1->fields)._size == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

