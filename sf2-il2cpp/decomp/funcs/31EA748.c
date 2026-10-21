// IGFJINHNIBB$$LLCONNGHGKD @ RVA 0x31EA748

void IGFJINHNIBB__LLCONNGHGKD(IGFJINHNIBB_o *__this,MethodInfo *method)

{
  int32_t index;
  bool bVar1;
  System_Collections_Generic_List_CELDGLHBCAM__o *__this_00;
  CELDGLHBCAM_o *LPMKBIKGPIM;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04566d8f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<CELDGLHBCAM>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CELDGLHBCAM>_get_Item__);
    DAT_04566d8f = 1;
    method = extraout_x1;
  }
  bVar1 = IGFJINHNIBB__KGGGJNCEPLF(__this,method);
  if ((!bVar1) && ((__this->fields)._DGMNNLJEMIB_k__BackingField == false)) {
    __this_00 = (__this->fields).CHAJPCCNGAI;
    if (__this_00 == (System_Collections_Generic_List_CELDGLHBCAM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    index = (__this->fields).COMINNDAGMN;
    if (index < (__this_00->fields)._size) {
      method_00 = Method_System_Collections_Generic_List<CELDGLHBCAM>_get_Item__;
      LPMKBIKGPIM = (CELDGLHBCAM_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,index,
                               (MethodInfo_26E4ADC *)
                               Method_System_Collections_Generic_List<CELDGLHBCAM>_get_Item__);
      IGFJINHNIBB__LLCONNGHGKD(__this,LPMKBIKGPIM,method_00);
      return;
    }
    (__this->fields)._DGMNNLJEMIB_k__BackingField = true;
  }
  return;
}

