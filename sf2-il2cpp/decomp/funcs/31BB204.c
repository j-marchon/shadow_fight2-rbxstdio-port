// DBIINAFCKME$$HHKNNDIJMOD @ RVA 0x31BB204

void DBIINAFCKME__HHKNNDIJMOD
               (DBIINAFCKME_o *__this,System_Nullable_OMOGNOHGLGJ__o CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_04566bde & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<OMOGNOHGLGJ>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<OMOGNOHGLGJ>_get_HasValue__);
    DAT_04566bde = 1;
  }
  if (((__this->fields).KIBLKFIDJIK.fields.value != CJNHFNHJHPE.fields.value) ||
     ((((ulong)CJNHFNHJHPE.fields & 0xff) != 0) ==
      ((*(uint *)&(__this->fields).KIBLKFIDJIK.fields & 0xff) == 0))) {
    (__this->fields).KIBLKFIDJIK.fields = CJNHFNHJHPE.fields;
  }
  return;
}

