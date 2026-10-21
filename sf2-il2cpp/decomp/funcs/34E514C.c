// BCAEBMNHBAN$$NDNPGAKJLHM @ RVA 0x34E514C

void BCAEBMNHBAN__NDNPGAKJLHM(BCAEBMNHBAN_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  
  if ((DAT_04568756 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<Texture,_Material>_Clear__);
    DAT_04568756 = 1;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).DOLIDMOELJG;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (pSVar1,Method_System_Collections_Generic_Dictionary<Texture,_Material>_Clear__);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).PLBHNKLOJNC
    ;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Clear
                (pSVar1,Method_System_Collections_Generic_Dictionary<Texture,_Material>_Clear__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

