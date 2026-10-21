// OMANDMDCGMF$$IKLEMLDDDPI @ RVA 0x329828C

void OMANDMDCGMF__IKLEMLDDDPI
               (IHIFNKAMALG_o *JDMFOIKOOMB,float MJCBABPPIAD,UnityEngine_Vector3_o PCLFHFELAII,
               bool HLADBJELCDH,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if (JDMFOIKOOMB != (IHIFNKAMALG_o *)0x0) {
    fVar1 = (JDMFOIKOOMB->fields).BLEOKMIDGIK.fields.y;
    fVar2 = (JDMFOIKOOMB->fields).BLEOKMIDGIK.fields.z;
    if (!HLADBJELCDH) {
      fVar1 = PCLFHFELAII.fields.y + (fVar1 - PCLFHFELAII.fields.y) * MJCBABPPIAD;
    }
    (JDMFOIKOOMB->fields).BLEOKMIDGIK.fields.x =
         PCLFHFELAII.fields.x +
         ((JDMFOIKOOMB->fields).BLEOKMIDGIK.fields.x - PCLFHFELAII.fields.x) * MJCBABPPIAD;
    (JDMFOIKOOMB->fields).BLEOKMIDGIK.fields.y = fVar1;
    (JDMFOIKOOMB->fields).BLEOKMIDGIK.fields.z =
         PCLFHFELAII.fields.z + (fVar2 - PCLFHFELAII.fields.z) * MJCBABPPIAD;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

