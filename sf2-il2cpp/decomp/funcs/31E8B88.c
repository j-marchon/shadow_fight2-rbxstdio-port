// MNLIBPAOCLG$$AJFICHLKOBO @ RVA 0x31E8B88

void MNLIBPAOCLG__AJFICHLKOBO
               (MNLIBPAOCLG_o *__this,float OAGELANKMBH,float IOJNHKIPJOK,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o value;
  
  __this_00 = (__this->fields).LDAKOINICNJ;
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    value.fields.y = IOJNHKIPJOK;
    value.fields.x = OAGELANKMBH;
    value.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(__this_01,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

