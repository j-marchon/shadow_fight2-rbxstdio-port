// NOAPKJBLPND$$DGLJCGNHLIG @ RVA 0x3522334

void NOAPKJBLPND__DGLJCGNHLIG(NOAPKJBLPND_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045689d6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_DEFIPIDEFOO>_Clear__);
    DAT_045689d6 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).MAKFKJPLHCF;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary<int,_object>__Clear
              (__this_00,Method_System_Collections_Generic_Dictionary<int,_DEFIPIDEFOO>_Clear__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

